/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 6
* @compiler VC
*
*/
#include<iostream>
using namespace std;

void Swap(unsigned int &number1, unsigned int &number2) {
	unsigned int swap = number1;
	number1 = number2;
	number2 = swap;
}

unsigned int NOD(unsigned int a, unsigned int b) {
	if (a < b) Swap(a, b);
	if ((a % b) == 0) return b;
	return NOD(a % b, b);
}

void RowPascalTriangle(unsigned int n) {
	int middle = ceil((double) n / 2);
	unsigned int *arr = new unsigned int[middle];
	arr[0] = 1;
	unsigned int nod, n1, n2;
	for (int k = 1; k < middle; k++) {
		nod = NOD(n - k + 1, k);
		n1 = (n - k + 1) / nod;
		n2 = k / nod;
		arr[k] = (arr[k - 1] / n2) * n1;
	}
	for (int k = 0; k < middle; k++) {
		cout << arr[k] << " ";
	}
	if (n % 2 == 0) {
		nod = NOD(n - middle + 1, middle);
		n1 = (n - middle + 1) / nod;
		n2 = middle / nod;
		cout << (arr[middle - 1] / n2) * n1 << " ";
	}
	for (int k = middle - 1; k > 0; k--) {
		cout << arr[k] << " ";
	}
	cout << arr[0] << endl;
	delete[] arr;
}

int main() {
	unsigned int n;
	cin >> n;
	if (n == 0) cout << 1 << endl;
	else if (n == 1) cout << 1 << " " << 1 << endl;
	else RowPascalTriangle(n);
	return 0;
}