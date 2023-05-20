#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    cout << "Введіть ціле число: ";
    cin >> number;

    int newNumber = 0;
    int multiplier = 1;

    while (number != 0) {
        int digit = number % 10;

        if (digit != 3 && digit != 6)
        {
            newNumber += digit * multiplier;
            multiplier *= 10;
        }

        number /= 10;
    }

    cout << "Результат: " << newNumber << endl;

    return 0;
}
