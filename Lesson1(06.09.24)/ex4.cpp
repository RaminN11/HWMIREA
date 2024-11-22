#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// Задание «Еще уравнение».
// Для любых введенных с клавиатуры a, b и c решить уравнение вида ax2 +bx+c=0.

int main()
{
    double a, b, c, x;

    cout << "Введите значение a: " << endl;
    cin >> a;

    cout << "Введите значение b: " << endl;
    cin >> b;

    cout << "Введите значение c: " << endl;
    cin >> c;

    double descriminant = b * b - (4 * a * c);
    if (descriminant > 0){
        double x1 = (-b + sqrt(descriminant)) / 2 * a;
        double x2 = (-b - sqrt(descriminant)) / 2 * a;
        cout << "Уравнение имеет 2 корня: x1 =" << x1 << ", x2 =" << x2 << endl;
    }
    else if (descriminant == 0){
        x = (-b) / (2 * a);
        cout << "Уравнение имеет 1 корень: x =" << x << endl;
    }
    else {
        cout << "Дискриминант отрцательный, следовательно не имеет корней" << endl;
    }
    
    return 0;
}



