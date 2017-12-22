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

const int MAXSIZE = 18409300;
bool arr[MAXSIZE]; // says if the index is a prime number

int main() {
	int n;
	cin >> n;

	arr[0] = false;
	arr[1] = false;
	for (int i = 2; i < MAXSIZE; i++) {
		arr[i] = true;
	}

	for (int i = 2; i <= sqrt(MAXSIZE); i++) {
		int j = i * i;
		while (j < MAXSIZE) {
			arr[j] = false;
			j += i;
		}
	}

	int t = 1;
	for (int i = 2; (i < MAXSIZE) && (t <= n); i++) {
		if (arr[i] && arr[i + 2]) {
			printf("%d %d\n", i, i + 2);
			t++;
		}
	}

	return 0;
}