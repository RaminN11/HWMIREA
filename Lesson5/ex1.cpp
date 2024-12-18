#include <iostream>
#include <string>
#include <cmath>
using namespace std;


void Euklid(int x, int y) {
	while (x != 0 and y != 0) {
		if (x > y) {
			x = x % y;
		}
		else {
			y = y % x;
		}
	}
	cout << x + y;
}
int main() {
	float a;
	float b;
	cin >> a;
	cin >> b;
	if (a == (int)a and b == (int)b and cin.good() and a>0 and b>0) {
		Euklid(a, b);
		return 0;
	}
	cout << "Введены некорректные данные";
	return 0;
}

