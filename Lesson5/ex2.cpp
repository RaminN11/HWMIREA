
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;


void resheto(float n) {
	int j;
	vector<int> nums;
	for (int i = 0; i < n; i++) {
		nums.push_back(i);
	}
	nums[1] = 0;
	int m = 2;
	while (m < n) {
		if (nums[m] != 0) {
			j = m * 2;
			while (j < n) {
				nums[j] = 0;
				j += m;
			}
		}
		m += 1;
	}
	for (int i = 0;i < n; i++) {
		if (nums[i] != 0){
			cout << nums[i] << endl;
		}
	}
}
int main() {
	float num;
	cin >> num;
	if (cin.good() and num>=2) {
		if(round(num)==num){
			resheto(num+1);
			return 0;
		}
		else {
			cout << "Введены неверные данные";
			return 0;
		}

	}

	cout << "Введены неверные данные";
	return 0;


}
