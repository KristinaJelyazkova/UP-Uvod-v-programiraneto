/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 2
* @compiler VC
*
*/
#include<iostream>
using namespace std;

int arr[32] = { 0 };
int k = 0;

void print(int n, int max) {
	if (n == 0) {
		cout << arr[0] << " = " << arr[1];
		int j = 2;
		while (arr[j] != 0) {
			cout << " + " << arr[j];
			j++;
		}
		cout << endl;
		arr[k] = 0;
		k--;
		max = arr[k];
		return;
	}
	int i;
	for (i = n; i >= 1; i--) {
		if (i <= max) {
			k++;
			arr[k] = i;
			max = i;
			print(n - i,max);
		}
	}
	if (i == 0) {
		arr[k] = 0;
		k--;
		max = arr[k];
	}
}

int main() {
	int n;
	cin >> n;
	arr[0] = n;
	print(n,32);
	return 0;
}