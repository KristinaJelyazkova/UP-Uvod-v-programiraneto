/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 10
* @compiler VC
*
*/
#include<iostream>
using namespace std;

int P_adicOrder(unsigned int p, long long int n) { // if n > 0
	int v = 0;
	bool flag = true;
	while (n > 0 && flag) {
		if (n % p == 0) v++;
		else flag = false;
		n /= p;
	}
	return v;
}

int main() {
	unsigned int nq, p1, p2;
	long long int n;
	int v1, v2, max;

	cin >> nq;

	for (int i = 1; i <= nq; i++) {
		cin >> p1 >> n >> p2;
		if (n == 0) cout << "infinity\n";
		else if (n == 1) cout << 0 << endl;
		else {
			v1 = P_adicOrder(p1, n);
			v2 = P_adicOrder(p2, n);
			if (v2 > v1) max = v2;
			else max = v1;
			cout << max << endl;
		}
	}

	return 0;
}