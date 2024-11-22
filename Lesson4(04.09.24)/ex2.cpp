#include <iostream>
using namespace std;

int sign(int x) {
    if (x > 0)
        return 1;
    else if (x == 0)
        return 0;
    else
        return -1;
}

int main() {
    int number;

    cout << "Введите число: ";
    cin >> number;

    int result = sign(number);
    cout << "Знак числа: " << result << endl;

    return 0;
}