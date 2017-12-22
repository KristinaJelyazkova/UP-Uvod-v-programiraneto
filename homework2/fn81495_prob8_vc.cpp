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

const int MAXSIZE = 100;

int ConvertToDecimal(int number, int k) {
	int res = 0;
	int powk = 1;
	int digit;
	while (number > 0) {
		digit = number % 10;
		if (digit >= k) return -1;
		res += digit * powk;
		powk *= k;
		number /= 10;
	}
	return res;
}

void ConvertToKsystem(int number, int k) {
	int numberK[MAXSIZE];
	int index = 0;
	while (number){
		numberK[index] = number % k;
		number /= k;
		index++;
	}

	for (int i = index - 1; i >= 0; i--) { // size = index
		cout << numberK[i];
	}
}

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int nDecimal = n, mDecimal = m;
	if (k != 10) {
		nDecimal = ConvertToDecimal(n, k);
		mDecimal = ConvertToDecimal(m, k);
	}
	if (nDecimal == -1 || mDecimal == -1) cout << "Bad input data!\n";
	else {
		int sum = nDecimal + mDecimal;
		if (sum == 0) cout << 0;
		else ConvertToKsystem(sum,k);
		cout << endl;
	}

	return 0;
}