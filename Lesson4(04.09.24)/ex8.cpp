#include <string>
#include <iostream>
#include <regex>
using namespace std;

void multiply(float A1[3][4], float B2[4][2], float res[3][2]) {
    int a, z, k;
    for (a = 0; a < 3; a++) {
        for (z = 0; z < 2; z++) {
            res[a][z] = 0;
            for (k = 0; k < 4; k++)
                res[a][z] += A1[a][k] * B2[k][z];
        }
    }
}

int main() {
    float items[3][4]{ { 5.,2.,0.,10. }, { 3.,5.,2.,5. }, { 20.,0.,0.,0. } };
    float price[4][2]{ { 1.2, 0.5 }, { 2.8, 0.4 }, { 5.0, 1.0 }, { 2.0, 1.5 } };
    float result[3][2];
    multiply(items, price, result);

    //1
    float mx = 0;
    int exp = 0;
    float mn = 1000000000;
    int cheap = 0;
    for (int i = 0; i < 3; i++) {
        if (result[i][0] > mx) {
            mx = result[i][0];
            exp = i;
        }
        if (result[i][0] < mn) {
            mn = result[i][0];
            cheap = i;
        }
    }
    cout << "дешевый: " << cheap + 1 << " дорогой: " << exp + 1 << endl;

    //2
    float mx1 = 0;
    int exp1 = 0;
    float mn1 = 1000000000;
    int cheap1 = 0;
    for (int i = 0; i < 3; i++) {
        if (result[i][1] > mx1) {
            mx1 = result[i][1];
            exp1 = i;
        }
        if (result[i][1] < mn1) {
            mn1 = result[i][1];
            cheap1 = i;
        }
    }
    cout << "дешевый: " << cheap1 + 1 << " дорогой: " << exp1 + 1 << endl;


    //3

    float summa = 0;
    for (int i = 0; i < 3; i++) {
        summa += result[i][0];
    }
    cout << summa << endl;

    //4

    float summa1 = 0;
    for (int i = 0; i < 3; i++) {
        summa1 += result[i][1];
    }
    cout << summa1 << endl;

    //5

    cout << summa - summa1;
}