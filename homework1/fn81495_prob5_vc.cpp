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
#include<math.h>
using namespace std;

int main() {
	const int R1 = 8, R2 = 3, R3 = 1;

	double x, y, u, v;
	cin >> x >> y;
	cin >> u >> v;

	double distanceToOrigin = sqrt((x + u) * (x + u) + (y + v) * (y + v));
	distanceToOrigin = floor(distanceToOrigin * 1000) / 1000;

	if((distanceToOrigin == R1) || (distanceToOrigin == R2) || (distanceToOrigin == R3)) cout << "0\n";
	else if (distanceToOrigin < R3) cout << "60\n"; 
	else if (distanceToOrigin < R2) cout << "20\n";
	else if (distanceToOrigin < R1) cout << "10\n";
	else cout << "0\n";

	return 0;
}