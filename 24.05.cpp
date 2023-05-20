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

    cout << "Цілі числа, на які число " << number << " ділиться без залишку: ";
    for (int i = 1; i <= number; i++) 
    {
        if (number % i == 0) 
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
