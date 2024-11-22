
#include <string>
#include <iostream>
#include <regex>
using namespace std;


int random_num1(int m, int i, int c) {
	int si = 0;
	int quantity;
	cin >> quantity;
	if (quantity < 0) {
		cout << "Введены некоректные данные. Повторите попытку!";
		exit(0);
	}
	for (int b = 0; b < quantity; b++) {
		si = (m * si + i) % c;
		cout << si << endl;
	}
}

int main() {
	cout << "Выберите режим рандома";
	int mode;
	cin >> mode;
	if (mode != 1 and mode != 2) {
		cout << "Введены некоректные данные. Повторите попытку! ";
		return 0;
	}
	if (mode == 1) {
		random_num1(37, 3, 64);
	}
	if (mode == 2) {
		random_num1(25173, 849, 65537);
	}


}