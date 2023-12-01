#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

class cl1
{
public:
    int mass[16];
    float y, i;

    double f1(float R)
    {

        if (R >= -7 && R <= -6)
        {
            y = 2;
        }
        if (R >= -6 && R <= -2)
        {
            y = (R + 2) * 0.25;
        }
        if (R > -2 && R <= 0)
        {
            y = (sqrt(4 - (R + 2) * (R + 2)) + 2);
        }
        if (R > 0 && R <= 2)
        {
            y = (sqrt(4 - (R) * (R)));
        }
        if (R >= 2 && R <= 3)
        {
            y = -(R - 2);
        }
        return y;
    }

    int lab1()
    {
        for (int i = -7; i <= 3; i++)
        {
            cout << f1(i) << "\n";
        }
        return 0;
    }

    double lab2()
    {
        int i;
        for (i = 0; i <= 15; i++)
        {
            mass[i] = i + 1;
            cout << "mass=" << mass[i] << "\n";
        }
        return i;
    }

    int lab3in()
    {
        cout << "start write txt"
             << "\n";
        fstream fout("red.txt"); // запись данных в файл

        for (i = -7; i <= 3; i++)
        {
            y = f1(i);
            fout << y << endl;
        }
        fout.close(); // закрываем файл для чтения
        cout << "end write txt" << endl;
        return 0;
    }

    int lab3out()
    {
        string line;
        ifstream fin("red.txt"); // окрываем файл для чтения
        cout << "start read txt"
             << "\n";
        if (fin.is_open())
        {
            while (getline(fin, line))
            {
                cout << line << endl;
            }
        }
        fin.close(); // закрываем файл
        cout << "end read txt"
             << "\n";
        return 0;
    }

    int lab4()
    {
        float z, a;
        cout << "a = ";
        cin >> a;
        z = (((a + 2) / sqrt(2 * a)) - (a / (sqrt(2 * a) + 2)) + (2 / a - sqrt(2 * a))) * (sqrt(a) - sqrt(2)) / (a + 2);
        cout << z;
        return 0;
    }
};

int main()
{
    cl1 kon; // определение объекта класса kon - объект класса
    kon.lab1(); // вызов метода класса
    kon.lab2();
    kon.lab3in();
    kon.lab3out();
    kon.lab4();
}