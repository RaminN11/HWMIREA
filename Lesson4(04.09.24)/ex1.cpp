#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("numbers.txt");
    if (!outFile) {
        cout << "Ошибка при открытии файла для записи!" << endl;
        return 1;
    }

    int num;

    cout << "Введите 10 чисел:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> num;
        outFile << num << " ";  
    }

    outFile.close();  
    ifstream inFile("numbers.txt");
    if (!inFile) {
        cout << "Ошибка при открытии файла для чтения!" << endl;
        return 1;
    }

    int sum = 0;

    while (inFile >> num) {
        sum += num;
    }

    inFile.close();  

    cout << "Сумма чисел: " << sum << endl;

    return 0;
}

  
