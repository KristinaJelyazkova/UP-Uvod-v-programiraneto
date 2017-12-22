/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 4
* @compiler VC
*
*/
#include<iostream>
using namespace std;

const int MAXSIZE = 10;

void SetOfDigits(int number, int &numberOfDigits, int *set) {
	int digit;
	bool isAlreadyInTheSet = false;
	int counter = 0;
	for (int i = 0; i < numberOfDigits; i++) {
		digit = number % 10;
		isAlreadyInTheSet = false;
		for (int j = i - 1; j >= 0; j--) {
			if (digit == set[j]) isAlreadyInTheSet = true;
		}
		if (!isAlreadyInTheSet) {
			set[counter] = digit;
			counter++;
		}
		number /= 10;
	}
	numberOfDigits = counter;
}

inline int NumberOfDigits(int number) {
	return floor(log10(number)) + 1;
}

void SortSet(int *set, int size) {
	int min;
	int minPos;
	int swap;
	for (int i = 0; i < size - 1; i++) {
		min = set[i];
		minPos = i;
		for (int j = i; j < size; j++) {
			if (set[j] < min) {
				min = set[j];
				minPos = j;
			}
		}
		if (set[i] != min) {
			swap = set[i];
			set[i] = set[minPos];
			set[minPos] = swap;
		}
	}
}

bool areSetsSame(int *setA, int *setB, int setAsize, int setBsize) {
	if (setAsize != setBsize) return false;
	for (int i = 0; i < setAsize; i++) {
		if (setA[i] != setB[i]) return false;
	}
	return true;
}

int main() {
	int a, b;
	cin >> a >> b;
	a = abs(a);
	b = abs(b);

	int numberOfDigitsA = NumberOfDigits(a);
	int setDigA[MAXSIZE];
	SetOfDigits(a, numberOfDigitsA, setDigA);
	SortSet(setDigA, numberOfDigitsA);

	int numberOfDigitsB = NumberOfDigits(b);
	int setDigB[MAXSIZE];
	SetOfDigits(b, numberOfDigitsB, setDigB);
	SortSet(setDigB, numberOfDigitsB);

	if (areSetsSame(setDigA, setDigB, numberOfDigitsA, numberOfDigitsB)) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}