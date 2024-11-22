//  Протабулировать функцию (составить таблицу значений)
// при изменении x от -4 до +4 с шагом 0.5.
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    double x = -4, y = 0;

    for (x = -4; x < 4; x+=0.5) {
        cout << "Значение x: " << x << "\n";

        y = (pow(x,2) - 2 * x + 2) / (x - 1);
        cout << "Значение y: " << y << endl;
    }

    return 0;
}
