#include <iostream>
#include <cmath>  // Для использования функций log и sqrt
#include <cstdlib> // Для использования функции abs

using namespace std;

int main() {
    double x, a, w;

    // Ввод значений x и a
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение a: ";
    cin >> a;


    if (abs(x) < 1) {
        if (x != 0) {  
            w = a * log(abs(x));
            cout << "Значение w: " << w << endl;
        } else {
            cout << "Ошибка" << endl;
        }
    } else if (a >= x * x) {
        w = sqrt(a - x * x);
        cout << "Значение w: " << w << endl;
    } else {
        cout << "Ошибка" << endl;
    }

    return 0;
}