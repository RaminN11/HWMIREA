//3.6

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
void file() {
    setlocale(0, "");
    ofstream filik("filik3.txt");
    filik << "hello bro fjvj nvfof vefvnev "; //ввод строки
    filik << "goodbye";
    filik.close();
    ifstream fin("filik3.txt");
    string buff;
    string word;
    string rword;
    int len = 0;
    int mlen = 10000000;
    while (getline(fin, buff)) {

        word = "";
        vector<string> rword;
        buff += ' ';
        for (int i = 0; i < buff.size(); i++) {
            if (buff[i] != ' ') {
                word += buff[i];
                len += 1;
            }
            else {
                if (len < mlen) {
                    if (word != "") {
                        mlen = word.size();
                        rword = { word };
                    }
                    len = 0;
                    word = "";

                }
                else if (len == mlen) {
                    rword.push_back(word);
                    len = 0;
                    word = "";
                }
                else {
                    len = 0;
                    word = "";
                }
            }

        }

        for (int i = 0; i < rword.size(); i++) {
            cout << rword[i] <<endl;
        }
    }
    fin.close();
}
int main() {
    file();
    return 0;
}

