#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// Вычислить объем и полную поверхность усеченного конуса:
// V = 1/3πh(R2+Rr+r2), S = π(R2+(R+r)l+r2). Размеры конуса ввести с клавиатуры.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float r1,r2,h,d;
    cout<<"Введите первый радиус: ";
    cin>>r1;
    cout<<"Введите второй радиус: ";
    cin>>r2;
    cout<<"Введте высоту: ";
    cin>>h;
    if(r1==r2 or r1<=0 or d<=0 or r2<=0 or h<=0){
        cout<<"Не усеченная пирамида";
    } 
    else{
	    float d= pow(pow(r1-r2,2)+pow(h,2),0.5);
        cout<<M_PI*1/3*h*(r1*r1+r2*r1+r2*r2)<<endl;
        cout<<M_PI*(pow(r2,2)+(r1+r2)*d+pow(r1,2));
    }
    return 0;

}
