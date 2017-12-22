/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 8
* @compiler VC
*
*/
#include<iostream>
using namespace std;

const int MAXSIZE = 100000;

int main() {
	int N;
	cin >> N;
	int number,index1 = 0, index2 = 0, oldnumber;
	int rem1[MAXSIZE], rem2[MAXSIZE];
	bool flag = false;

	for (int i = 1; i <= N; i++) {
		cin >> number;
		oldnumber = number;
		if (number < 0) number = (-(abs(number) % 3) + 3) % 3;
		if (number % 3 == 0) {
			if (flag) printf(" ");
			printf("%d", oldnumber);
			flag = true;
		}
		else if (number % 3 == 1) {
			rem1[index1] = oldnumber;
			index1++;
		}
		else {
			rem2[index2] = oldnumber;
			index2++;
		}
	}

	for (int j = 0; j < index1; j++) {
		if (flag) printf(" ");
		printf("%d", rem1[j]);
		flag = true;
	}
	for (int j = 0; j < index2; j++) {
		if (flag) printf(" ");
		printf("%d", rem2[j]);
		flag = true;
	}
	cout << endl;
	return 0;
}