#include <iostream>
#include <cmath>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main(){
    for(int i=0; i<8;i++){
        for(int j=0;j<36;j++){
            if(j==0 and i!=0){
                cout<<endl;
            }
            if(i<4 and j<12){
                cout<<"*";
            }
            else{
                cout<<"_";
            }
        }
    }
}