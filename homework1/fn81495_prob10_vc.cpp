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
#include<iomanip>
using namespace std;

int main() {
	double a1, a2, a3;
	cin >> a1 >> a2 >> a3;
	double b1, b2, b3;
	cin >> b1 >> b2 >> b3;

	double x, y;
	if ( (a1 == 0) && (b1 != 0) ) {
		double swap;
		swap = a1;
		a1 = b1;
		b1 = swap;
		swap = a2;
		a2 = b2;
		b2 = swap;
		swap = a3;
		a3 = b3;
		b3 = swap;

	}
	if (b1 != 0) {
		b2 = b1 * a2 - a1 * b2;
		b3 = b1 * a3 - a1 * b3;
	}
	if (b2 == 0) {
		if (b3 != 0) cout << "No solution\n"; 
		else {
			if ( (a1 == 0) && (a2 == 0) && (a3 != 0)) cout << "No solution\n";
			cout << "Many solutions\n";
		}
	}
	else {
		y = b3 / b2;
		if (a1 == 0) {
			if( (a3 - a2 * y) == 0) cout << "Many solutions\n";
			else cout << "No solution\n";
		}
		else {
			x = (a3 - a2 * y) / a1;
			cout << setprecision(5) << x << " " << setprecision(5) << y << "\n";
		}
	}

	return 0;
}