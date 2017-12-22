/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 5
* @compiler VC
*
*/
#include<iostream>
using namespace std;

int main() {
	unsigned int N;
	double D, a;
	cin >> N >> D;

	if (N == 0) printf("%.5f", 0);
	else {
		double curS, S = 0,
			v = 0, oldV = 0;
		double Dsquared = D * D;

		for (int i = 1; i <= N; i++) {
			cin >> a;
			curS = oldV * D + 0.5 * a * Dsquared;
			v = oldV + a * D;
			if (curS < 0) curS = 0;
			if (v < 0) v = 0;
			S += curS;
			oldV = v;
		}

		printf("%.5lf", S);
	}
	cout << endl;

	return 0;
}