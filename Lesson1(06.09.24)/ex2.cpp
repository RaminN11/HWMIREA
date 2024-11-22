// Задание «Арифметика». Ввести с клавиатуры два числа и найти их сумму, разность, произведение и, 
// если возможно, частное от деления одного на другое.
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    double a,b;

    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите второе число: ";
    cin >> b;
    //Сумма
    double summ = a + b;
    cout << "Сумма: " << summ << endl;
    //Разность
    double diff = a - b;
    cout << "Разность: " << diff << endl;
    //Произведение
    double product = a * b;
    cout << "Произведение: " << product << endl;
    //Деление
    if (b != 0) {
        double div = a / b;
        cout << "Частное: " << div << endl;
    }
    else {
        cout << "Деление на ноль невозможно" << endl;
    }
    return 0;

}
