/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 3
* @compiler VC
*
*/
#include<iostream>
using namespace std;

const int MAXSIZE = 10;

void CreateArrayOfDigits(unsigned int number, int numberOfDigits, int *arr) {
	for (int i = 0; i < numberOfDigits; i++) {
		arr[numberOfDigits - 1 - i] = number % 10;
		number /= 10;
	}
}

inline int NumberOfDigits(unsigned int number) {
	return floor(log10(number)) + 1;
}

int NumberOfOccurrencesOfAinB(int *arrA, int *arrB, int Asize, int Bsize) {
	int counter = 0;
	bool AisInB = true;
	for (int i = 0; i <= Bsize - Asize; i++) {
		if (arrB[i] == arrA[0]) {
			for (int j = 1; j < Asize; j++) {
				if (arrB[i + j] != arrA[j]) AisInB = false;
			}
			if (AisInB) counter++;
			AisInB = true;
		}
	}
	return counter;
}

int main() {
	unsigned int a, b;
	cin >> a >> b;

	int numberOfDigitsA = NumberOfDigits(a);
	int arrDigA[MAXSIZE];
	CreateArrayOfDigits(a, numberOfDigitsA, arrDigA);

	int numberOfDigitsB = NumberOfDigits(b);
	int arrDigB[MAXSIZE];
	CreateArrayOfDigits(b, numberOfDigitsB, arrDigB);

	cout << NumberOfOccurrencesOfAinB(arrDigA, arrDigB, numberOfDigitsA, numberOfDigitsB) << endl;

	return 0;
}