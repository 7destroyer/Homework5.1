/*/
разбиение числа на сумму двух простых чисел*/
#include <iostream>
#include <cmath>

using namespace std;

bool goldbach(int num);

int main()
{
    setlocale(LC_ALL, "RU");
    int number;
    int num1, num2;
    cout << "Введите четное число больше 2: " << endl;
    cin >> number;
    
    if (goldbach(number)) {
        cout << "Число " << number << " можно представить в виде суммы двух простых чисел." << endl;
    }
    else {
        cout << "Число " << number << " нельзя представить в виде суммы двух простых чисел." << endl;
    }

    for (int i = 2; i < number / 2; i++) {
        num1 = i;
        num2 = number - i;
        if (goldbach(num1) && goldbach(num2)) {
            cout << num1 << "+" << num2; 
            return 0;
        }
    }

    return 0;
}

bool goldbach(int num) {
    if (num < 2) {
        cout << "Error!" << endl;
    }
    for (int i = 2; i <= num; i++) {
        if (num % 2 == 0) {
            return false;
        }
        return true;
    }
}