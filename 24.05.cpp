#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() 
    {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        int x, y;
        cout << "Введіть число x: ";
        cin >> x;
        cout << "Введіть число y: ";
        cin >> y;

        int result = pow(x, y);

        cout << x << " у степені " << y << " = " << result << endl;

        return 0;
    }
