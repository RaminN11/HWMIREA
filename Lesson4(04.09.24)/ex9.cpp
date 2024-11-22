#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int char_to_int(char symbol) {
	switch (symbol) {
	case '0': return 0; break;
	case '1': return 1; break;
	case '2': return 2; break;
	case '3': return 3; break;
	case '4': return 4; break;
	case '5': return 5; break;
	case '6': return 6; break;
	case '7': return 7; break;
	case '8': return 8; break;
	case '9': return 9; break;
	case 'A': return 10; break;
	case 'B': return 11; break;
	case 'C': return 12; break;
	case 'D': return 13; break;
	case 'E': return 14; break;
	case 'F': return 15; break;
	}
	return -1;
}


string int_to_char(int symbol) {
	switch (symbol) {
	case 0: return "0"; break;
	case 1: return "1"; break;
	case 2: return "2"; break;
	case 3: return "3"; break;
	case 4: return "4"; break;
	case 5: return "5"; break;
	case 6: return "6"; break;
	case 7: return "7"; break;
	case 8: return "8"; break;
	case 9: return "9"; break;
	case 10: return "A"; break;
	case 11: return "B"; break;
	case 12: return "C"; break;
	case 13: return "D"; break;
	case 14: return "E"; break;
	case 15: return "F"; break;
	}
	return "";
}

int main() {
	int a;
	int b;
	string num;
	cout << "Введите систему счисления числа: ";
	cin >> a;
	cout << "Введит число: ";
	cin >> num;
	cout << "Введите систему в которую надо перевести число: ";
	cin >> b;
	if (a < 2 or b < 2 or a>16 or b>16 or (num[0] == '0' and num.size() > 1)) {
		cout << "Введены некоректные данные. Повторите попытку!";
		return 0;
	}
	if (num == "0") {
		cout << "0";
		return 0;
	}
	long long int decimal = 0;
	// в десятичную
	for (int i = 0; i < num.size(); i++) {
		if (char_to_int(num[i]) == -1 or char_to_int(num[i]) >= a) {
			cout << "Введены некоректные данные. Повторите попытку!";
			return 0;
		}
		decimal += char_to_int(num[i]) * pow(a, num.size() - i - 1);
	}
	string ans = "";
	// в любую
	while (decimal != 0) {
		ans += int_to_char(decimal % b);
		decimal = decimal / b;
	}
	string rans = "";
	for (int i = 0; i < ans.size(); i++) {
		if (i != 0 or ans[ans.size() - 1] != '0') {
			rans += ans[ans.size() - i - 1];
		}
	}
	cout << rans;
	return 0;
}