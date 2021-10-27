// Zadacha12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "This program deletes dublicates of elemnts in the array\n";
    int n, k, x;
    double* a;
    std::cout << "Enter N\n";
    std::cin >> n;
    while (std::cin.fail() || n <= 0)
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Wrong N!\n";
        std::cout << "Enter N another time\n";
        std::cin >> n;
    }
    a = new double[n];
    std::cout << "Enter elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        while (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Wrong element's value!\n";
            std::cout << "Enter element № " << (i + 1) << "  of the array another time\n";
            std::cin >> a[i];
        }
    }

    for (int i = 1; i < n; i++)
    {
        for(x = 0; x < i; x++)
        { 
            if (a[x] == a[i])
            {
                if (x == n - 1) 
                {
                    n --;
                }
                else 
                {
                    for (int j = x; j < n - 1; j++) 
                    {
                        a[j] = a[j + 1];
                    }
                    n--;
                }
                i--;
                break;
            }
        }
    }
    std::cout << "\n";
    std::cout << n << "\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << "\n";
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
