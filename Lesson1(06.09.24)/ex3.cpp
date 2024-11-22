#include <iostream>
#include <cstdlib>
using namespace std;

//Задание «Уравнение». Для любых введенных с клавиатуры b и c решить уравнение вида bx + c = 0.


int main() {
    double b, x, c;

    cout << "Введите значение b: " << endl;
    cin >> b;

    cout << "Введите значение c: " << endl;
    cin >> c;

    if (b == 0) {
        if (c == 0){
            cout << " Уравнение имеет бесконечное количество решений" << endl;
        }
        else {
            cout << " Уравнениие не имеет решений" << endl;
        }
    }
    else{
        x = -c / b;
        cout << "Уравнение равно нулю, при x: " << x << endl;
    }
    return 0;
}