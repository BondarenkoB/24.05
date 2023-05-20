﻿#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int count = 0;

    for (int i = 100; i <= 999; i++)
    {
        int digit1 = i % 10;
        int digit2 = (i / 10) % 10;
        int digit3 = i / 100;

        if (digit1 != digit2 && digit1 != digit3 && digit2 != digit3)
        {
            count++;
        }
    }

    cout << "Кількість цілих чисел з різними цифрами: " << count << endl;

    return 0;
}
