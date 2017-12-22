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
	unsigned int sum;
	cin >> sum;

	int counter50, counter20, counter10, counter5, counter2;

	cout << sum << " = ";

	counter50 = sum / 50;
	sum %= 50;
	if (counter50 > 0) {
		cout << counter50 << "*50";
		if (sum > 0) cout << " + ";
	}

	counter20 = sum / 20;
	sum %= 20;
	if (counter20 > 0) {
		cout << counter20 << "*20";
		if (sum > 0) cout << " + ";
	}

	counter10 = sum / 10;
	sum %= 10;
	if (counter10 > 0) {
		cout << counter10 << "*10";
		if (sum > 0) cout << " + ";
	}

	counter5 = sum / 5;
	sum %= 5;
	if (counter5 > 0) {
		cout << counter5 << "*5";
		if (sum > 0) cout << " + ";
	}

	counter2 = sum / 2;
	sum %= 2;
	if (counter2 > 0) {
		cout << counter2 << "*2";
		if (sum > 0) cout << " + ";
	}

	if (sum > 0) cout << sum << "*1";
	cout << "\n";

	return 0;
}