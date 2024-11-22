//Создать на диске текстовый файл и вывети содержимое файла на экран
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
setlocale(0, ""); 
ofstream filik("text.txt");
filik<<"hello\n";
filik<<"goodbye";
filik.close();
ifstream fin("text.txt"); 
string buff;
while(getline(fin, buff)){
    cout << buff << endl; 
}
fin.close(); 
return 0;
}
