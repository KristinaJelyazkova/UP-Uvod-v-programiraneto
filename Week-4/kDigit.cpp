#include<iostream>
#include<assert.h>
using namespace std;

int main() {
	int number;
	cout << "number= ";
	cin >> number;
	int numberCopy = number;

	int counterDigits = 0;
	while (numberCopy) {
		numberCopy /= 10;
		counterDigits++;
	}

	int k;
	cout << "k=";
	cin >> k;
	assert(k <= counterDigits);

	int pow10 = 1;
	for (int i = 1; i <= counterDigits - k; i++) pow10 *= 10;


	int kDigit = (number / pow10) % 10;

	cout << "The k digit is " << kDigit << endl;

	system("pause");
	return 0;
}