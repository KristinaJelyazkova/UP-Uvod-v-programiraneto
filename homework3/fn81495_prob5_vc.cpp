/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 5
* @compiler VC
*
*/
#include<iostream>
using namespace std;

const int MAXSIZE = 1001;
const int maxLengthN = 50;

int main() {
	char expression[MAXSIZE];
	cin.getline(expression, MAXSIZE);
	int size = strlen(expression);
	char cnumber[maxLengthN];
	long long number = 0;
	int index = 0, numSystem, k; // k is number of symbols that are not from the number (0 or 0x or 0b)
	long long sum = 0;
	for (int i = 0; i <= size; i++) {
		if ((expression[i] != ' ') && (expression[i] != '+') && (expression[i] != '\0')) {
			cnumber[index] = expression[i];
			index++;
		}
		else {
			if (index > 0) {
				if (cnumber[0] != '0') {
					numSystem = 10;
					k = 0;
				}
				else {
					if (cnumber[1] == 'b') {
						numSystem = 2;
						k = 2;
					}
					else if (cnumber[1] == 'x') {
						numSystem = 16;
						k = 2;
					}
					else {
						numSystem = 8;
						k = 1;
					}
				}
				long long pow = 1;
				for (int j = index - 1; j >= k; j--) {
					if (cnumber[j] >= 'A' && cnumber[j] <= 'F') cnumber[j] = cnumber[j] - 'A' + 10;
					else cnumber[j] = cnumber[j] - '0';
					number += cnumber[j] * pow;
					pow *= numSystem;
				}
				sum += number;
				number = 0;
				index = 0;
			}
		}
	}
	cout << sum << endl;
	return 0;
}