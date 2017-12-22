#include<iostream>
using namespace std;

int main() {
	int day, month, year;
	bool isValid = true;

	cout << "Enter day:";
	cin >> day;
	cout << "Enter month:";
	cin >> month;
	cout << "Enter year:";
	cin >> year;

	switch (month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: if (day > 31) isValid = false; break;
		case 4: case 6: case 9: case 11: if (day > 30) isValid = false; break;
		case 2: if ((year % 4 == 0 && day > 29) || (year % 4 != 0 && day > 28)) isValid = false; break;
		default: isValid = false;
	}

	if (isValid) cout << "The date you entered is valid." << endl;
	else cout << "The date you entered is not valid." << endl;
	return 0;
}