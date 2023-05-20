#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    cout << "Введіть ціле число А: ";
    cin >> a;

    int sum = 0;
    int number = a;
    while (number != 0) 
    {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    int cubeSum = sum * sum * sum;

    if (cubeSum == a * a) 
    {
        cout << "Куб суми цифр числа " << a << " дорівнює квадрату числа " << a << endl;
    }
    else 
    {
        cout << "Куб суми цифр числа " << a << " не дорівнює квадрату числа " << a << endl;
    }

    return 0;
}
