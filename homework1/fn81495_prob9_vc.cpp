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
#include<math.h>
using namespace std;

int main() {
	int number1, number2;
	char operation;
	cin >> number1 >> operation >> number2;
	if (number1 > 15) number1 %= 16;
	if (number2 > 15) number2 %= 16;
	if (number1 < 0) number1 = -(abs(number1) % 16) + 16;
	if (number2 < 0) number2 = -(abs(number2) % 16) + 16;

	int result;
	bool flag = 1;
	switch (operation) {
	case '+': result = (number1 + number2) % 16; break;
	case '-': result = number1 - number2;
		if (result < 0) result += 16;
		break;
	case '.': result = (number1 * number2) % 16; break;
	case '/': if (number2 == 0) {
				cout << "Division by zero!\n";
				flag = 0;
			  }
			  else result = number1 / number2;
			  break;
	case '%': if (number2 == 0) {
				cout << "Division by zero!\n";
				flag = 0;
			  }
			  else result = number1 % number2;
			  break;
	default: cout << "Bad input!\n"; flag = 0;
	}

	if (flag) cout << result << "\n";

	return 0;
}