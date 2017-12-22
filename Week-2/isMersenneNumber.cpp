#include<iostream>

using namespace std;

int main() {
	int number;
	bool isMer = true;
	cin >> number;

	for (int i = 2; i <= ( (number / 2) + 1 ); i++) {
		if ((number % i) == 0) isMer = false;
	}

	number++;

	while ((number != 1) && isMer) {
		if ((number % 2) == 0) number /= 2;
		else isMer = false;
	}

	if (isMer) cout << "The number you enteres is mersenne." << endl;
	else cout << "The number you enteres is not mersenne." << endl;

	return 0;
}