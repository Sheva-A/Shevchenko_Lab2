#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number, originalNumber, reverseNumber = 0;
    cout << "Введіть число: ";
    cin >> number;

    originalNumber = number; 

    while (number != 0) {
        reverseNumber = reverseNumber * 10 + number % 10;
        number /= 10;
    }

    if (originalNumber == reverseNumber) {
        cout << "Число є паліндромом!";
    }
    else {
        cout << "Число не є паліндромом!";
    }

    return 0;
}
