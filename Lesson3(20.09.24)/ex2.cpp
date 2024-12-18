#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    float k=10000000000;
    float s,m,n,ans;
    cin>>s>>m>>n;
    if (s<=0 or m<=0 or n<=0 or s<n){
        cout<<"Введены некорректные величины";
        return 0;
    }
    if (m*12*n==s){
        cout<<0;
        return 0;
    }
    float eps=0.1;
    for(float i=0; i<=100; i+=0.0001){
        float p=i;
        float r=p/100;
        float m0=(s*r*pow((1+r),n))/(12*(pow(1+r,n)-1));
        if(abs(m-m0)<(eps)){
            if (k>abs(m-m0)){
                k=abs(m-m0);
                ans=i;
            }
        }
    }
    cout<<ans;
    return 0;
}
