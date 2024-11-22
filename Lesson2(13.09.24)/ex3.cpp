//Для произвольных x, y и b, введенных вами с клавиатуры, вычислить функцию
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    double x, y, b;

    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение y: ";
    cin >> y;
    cout << "Введите значение b: ";
    cin >> b;

    double z = log10(b - y) * sqrt(b - x);
    if (z>=0){
    cout << "Значение z равно: " << z << endl;
    } else {
        cout << "Ошибка" << endl;
    }
    return 0;
}
