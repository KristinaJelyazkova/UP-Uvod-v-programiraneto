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

void print(int n) {
	if (n == 1) {
		printf("1");
		return;
	}
	print(n - 1);
	printf("%d", n);
	print(n - 1);
}

int main() {
	int n;
	cin >> n;
	print(n);
	cout << endl;
	return 0;
}