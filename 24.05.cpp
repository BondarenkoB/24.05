#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int k;
    cout << "Введіть номер варіанту: ";
    cin >> k;

    for (int i = 1; i <= 10; i++)
    {
        int result = k * i;
        cout << k << " x " << i << " = " << result << endl;
    }

    return 0;
}
