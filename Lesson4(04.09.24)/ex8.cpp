#include <iostream>
#include <cstdlib>
using namespace std; 
 
int n,i,j; 
float s,Smax=0,Smin=999,Sx,Sn,Kmax=0,Kmin=999,Kx,Kn,S=0,K=0,N=0; 
int main(){ 
    float A[3][4]={{5,2,0,10},{3,5,2,5},{20,0,0,0}}; 
    float B[4][2]={{1.2,0.5},{2.8,0.4},{5,1},{2,1.5}}; 
    float C[3][2]={{0,0},{0,0},{0,0}}; 

    
    for (n=0;n<3;n++){ 
        for (i=0;i<2;i++){ 
            s=0; 
            for (j=0;j<4;j++){ 
                s=s+A[n][j]*B[j][i]; 
            } 
        C[n][i]=s; 
        } 
    } 
    for (i=0;i<3;i++){ 
        S+=C[i][0]; 
        K+=C[i][1]; 
        if (Smax<C[i][0]){Smax=C[i][0];Sx=i;} 
        if (Smin>C[i][0]){Smin=C[i][0];Sn=i;} 
        if (Kmax<C[i][1]){Kmax=C[i][1];Kx=i;} 
        if (Kmin>C[i][1]){Kmin=C[i][1];Kn=i;} 
        } 
    N=S+K; 
    cout <<Sx+1<<" "<<Sn+1<< endl; 
    cout<<Kx+1<<" "<<Kn+1<<endl; 
    cout<<S<<endl; 
    cout<<K<<endl; 
    cout<<N; 
}
