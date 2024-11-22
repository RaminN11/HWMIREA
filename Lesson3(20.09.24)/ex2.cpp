#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    float s,m,n,r,p,m1,eps,step;

    cout << "Введите сумму займа (s): ";
    cin >> s;

    cout << "Введите величину займа (m): ";
    cin >> m;

    cout << "Введите количество лет (n): ";
    cin >> n;
    eps=0.01;
    step=0.0001;
    p=1;
    while(p <= 100) {
        r=p/100;
        m1 = (s*r*pow((1+r),n))/(12*(pow(1+r,n)-1));
        if (abs(m1-m)<eps) {
            cout << p << "%" << endl;
            return 0;
        }
        p+=step;
    }
    cout << "Ошибка" << endl;
}
