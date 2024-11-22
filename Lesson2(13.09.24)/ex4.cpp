// Распечатать 10 последовательных натуральных чисел в возрастающем порядке,
// начиная с произвольного числа N, введенного вами с клавиатуры.
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cout << "Введите целое число N: ";

    while (true) {
        if (!(cin >> N)) {
            cout << "Ошибка: введите целое число!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            
            cout << "Попробуйте снова: ";
        } else if (cin.peek() != '\n') {
            cout << "Ошибка: введите целое число!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Попробуйте снова: ";
        } else {
            break;  
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << N + i << " ";
    }
    cout << endl;

    return 0;
}