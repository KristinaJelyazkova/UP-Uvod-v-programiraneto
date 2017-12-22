/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 9
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

bool Number2DerivesFromNumber1(int *arr1, int size1, int *arr2, int size2) {
	if (size1 <= size2) return false;
	if (size1 > size2 + 1) {
		int dif = size1 - size2;
		for (int i = 1; i < dif; i++) {
			if (arr1[i] != 0) return false;
		}
		for (int j = 0; j < size2; j++) {
			if (arr2[j] != arr1[j + dif]) return false;
		}
		return true;
	}
	else { // if(size1 == size2 + 1)
		int j = 0;
		bool foundDif = false;
		for (int i = 0; i < size1; i++) {
			if (arr1[i] != arr2[j]) {
				if (!foundDif) foundDif = true;
				else return false; 
			}
			else j++;
		}
	}
}

int main() {
	unsigned int number1, number2;
	cin >> number1 >> number2;

	int numberOfDigits1 = NumberOfDigits(number1),
		numberOfDigits2 = NumberOfDigits(number2);

	int arr1[MAXSIZE];
	int	arr2[MAXSIZE];
	CreateArrayOfDigits(number1, numberOfDigits1, arr1);
	CreateArrayOfDigits(number2, numberOfDigits2, arr2);

	if (Number2DerivesFromNumber1(arr1,numberOfDigits1,arr2,numberOfDigits2)) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}