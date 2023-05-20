#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    cout << "Введіть число a (1 <= a <= 20): ";
    cin >> a;

    int product = 1;
    for (int i = a; i <= 20; i++) 
    {
        product *= i;
    }

    cout << "Здобуток цілих чисел від " << a << " до 20: " << product << endl;

    return 0;
}
