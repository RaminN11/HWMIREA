#include <iostream>
#include <cstring> // Для работы со строками

using namespace std;

int main() {
    char str[31] = "qwertyuiopasdfghjklzxcvbnmqwe"; 
    int n = strlen(str); 
    cout << "Исходная строка: " << str << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    cout << "Отсортированная строка: " << str << endl;

    return 0;
}
