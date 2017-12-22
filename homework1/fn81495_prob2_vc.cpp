/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 1
* @compiler VC
*
*/

#include<iostream>
using namespace std;

int main() {
	unsigned long long int EGN;
	cin >> EGN;


	int digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9, digit10;
	digit10 = EGN % 10;
	digit9 = (EGN / 10) % 10;
	digit8 = (EGN / 100) % 10;
	digit7 = (EGN / 1000) % 10;
	digit6 = (EGN / 10000) % 10;
	digit5 = (EGN / 100000) % 10;
	digit4 = (EGN / 1000000) % 10;
	digit3 = (EGN / 10000000) % 10;
	digit2 = (EGN / 100000000) % 10;
	digit1 = (EGN / 1000000000) % 10;

	int year, month, day;
	year = (digit1 * 10) + digit2;
	month = (digit3 * 10) + digit4;
	day = (digit5 * 10) + digit6;
	if (month > 40) {
		month -= 40;
		year += 2000;
	}
	else if (month > 20) {
		month -= 20;
		year += 1800;
	}
	else year += 1900;

	bool isValid = true;

	if (day == 0) isValid = false;

	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: if (day > 31) isValid = false; break;
	case 4: case 6: case 9: case 11: if (day > 30) isValid = false; break;
	case 2:
		if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
			if (day > 29) isValid = false; break;
		}
		else if (day > 28) isValid = false; break;
	default: isValid = false;
	}

	int sum = 0;
	sum += digit9 * 6;
	sum += digit8 * 3;
	sum += digit7 * 7;
	sum += digit6 * 9;
	sum += digit5 * 10;
	sum += digit4 * 5;
	sum += digit3 * 8;
	sum += digit2 * 4;
	sum += digit1 * 2;
	if ((sum % 11) < 10) {
		if (digit10 != (sum % 11)) isValid = false;
	}
	else if (digit10 != 0) isValid = false;

	if (!isValid) cout << "Bad input data!\n";
	else {
		if (day < 10) cout << "0";
		cout << day << ".";
		if (month < 10) cout << "0";
		cout << month << ".";
		cout << year << " ";

		if ((digit9 % 2) == 0) cout << "M\n";
		else cout << "F\n";
	}

	return 0;
}