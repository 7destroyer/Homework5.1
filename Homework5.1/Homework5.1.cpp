/*/
разбиение числа на сумму двух простых чисел*/
#include <iostream>
#include <cmath>

using namespace std;

bool goldbach(int num);
bool isPrime(int num);

int main()
{
    setlocale(LC_ALL, "RU");

    int number;
    cout << "Введите четное число больше 2: " << endl;
    cin >> number;
    
    if (goldbach(number)) {
        cout << "Число " << number << " можно представить в виде суммы двух простых чисел." << endl;
    }
    else {
        cout << "Число " << number << " нельзя представить в виде суммы двух простых чисел." << endl;
    }

    return 0;
}

//проверка гипотезы Гольдбаха
bool goldbach(int num) {
    if (num <= 2 || num % 2 != 0) {
        return false;
    }

    for (int i = 2; i <= num / 2; i++) {

        int num1 = i;
        int num2 = num - i;

        if (isPrime(num1) && isPrime(num2)) {
            cout << num << "=" << num1 << "+" << num2 << endl;
            return true;
        }
    }
    return false;
}

//простое ли число
bool isPrime(int num) {
    if (num < 2) {
        cout << "Error!" << endl;
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}