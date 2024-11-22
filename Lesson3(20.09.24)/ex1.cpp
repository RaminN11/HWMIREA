#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    double p, n, s, m;

    cout << "Введите сумму займа (s): ";
    cin >> s;

    cout << "Введите процент (p): ";
    cin >> p;

    cout << "Введите количество лет (n): ";
    cin >> n;


    double r = p / 100;
    if ((p <= 100) and (p>=1)){
        m = (s*r*pow((1+r),n))/(12*(pow(1+r,n)-1));
        cout << "Месячная выплата равна: " << m << endl; 
    }
    if (p==0) {
        cout<<s/(n*12)<<endl;
    }
    else{
        cout<<"Ошибка"<<endl;
    }
    return 0;
}
