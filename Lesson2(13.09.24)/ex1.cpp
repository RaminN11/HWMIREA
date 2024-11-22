#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// Вычислить объем и полную поверхность усеченного конуса:
// V = 1/3πh(R2+Rr+r2), S = π(R2+(R+r)l+r2). Размеры конуса ввести с клавиатуры.

int main()
{
    double R, l, r, h;
    cout<<"Введите значение большего радиуса:  ";
    cin >> R;

    cout<<"Введите значение меньшего радиуса: ";
    cin >> r;

    cout<<"Введите значение высоты: ";
    cin >> h;


    if (R==r){
    cout<<"Усеченный конус с данными значенями не существует. "<<endl;
    }
    else {
        cout<<"Усеченный конус с данными значениями существует"<<endl;
    }
    l = sqrt(pow(R - r, 2) + pow(h, 2));
    double V = (1.0 / 3) * M_PI * h * (pow(R, 2) + R * r + pow(r, 2));
    double S = M_PI*(R*R+(R+r)*l+r*r);

    cout << "Объем усеченного конуса: "<< V << endl;
    cout << "Площадь полной поверхности усеченного конуса: " << S << endl;
    return 0;
}
