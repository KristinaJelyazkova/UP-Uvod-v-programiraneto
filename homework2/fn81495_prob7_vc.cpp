/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 7
* @compiler VC
*
*/
#include<iostream>
using namespace std;

int ModularExponentation(int base, int exp, int mod) {
	int res = 1;
	while (exp > 0) {
		if (exp % 2 == 1) res = (res * base) % mod;
		base = (base * base) % mod;
		exp = floor(exp / 2);
	}
	return res;
}

int main() {
	int n, m, y;
	cin >> n >> m >> y;

	bool exist = false;
	for (int x = 1; x <= m - 1; x++) {
		if (ModularExponentation(x, n, m) == y) {
			if (exist) cout << " ";
			else exist = true;
			cout << x;
		}
	}

	if (!exist) cout << -1;
	cout << endl;

	return 0;
}