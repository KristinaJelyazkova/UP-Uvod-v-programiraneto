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
	unsigned int number;
	cin >> number;

	int numberOfDigitsIn16 = (int)(floor((double)(log10(number) / log10(16)) + 1));

	int polynomial = (int)((double)(pow(16.0, (double)numberOfDigitsIn16) - 1) / 15);

	int digit = number % 16;

	if ( (digit * polynomial) == number) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}