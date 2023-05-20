#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number1, number2;
    cout << "Введіть перше ціле число: ";
    cin >> number1;
    cout << "Введіть друге ціле число: ";
    cin >> number2;

    cout << "Цілі числа, на які обидва числа " << number1 << " і " << number2 << " діляться без залишку: ";
    for (int i = 1; i <= number1 && i <= number2; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
