#include <iostream>
#include <fstream>
using namespace std;
int main() {
setlocale(0, ""); 
ofstream file("text.txt");
file<<"dhbsv1212 231jhfe efbw 21f";
file.close();
ifstream fin("text.txt"); 
string buff;
while(getline(fin, buff)){
    string k;
    for(int i=0; i<=buff.size(); i++){
        if(isdigit(buff[i]) and (buff[i])!='0'){
            k+=buff[i];
        }
        else if(buff[i]=='0' and k==""){
            cout<<'0'<<endl;
        }
        if(isdigit(buff[i])==0 and k!=""){
            cout<<k<<endl;
            k="";

        }

    }   
    cout<<k;
}
fin.close(); 
return 0;
}



