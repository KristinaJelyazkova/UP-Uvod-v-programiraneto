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

int main() {
	double x, y;
	cin >> x >> y;

	double distanceToOrigin = sqrt(x * x + y * y);
	double distanceToCenterOfSmallBlackCircle = sqrt(x * x + (y - 3) * (y - 3));
	double distanceToCenterOfSmallWhiteCircle = sqrt(x * x + (y + 3) * (y + 3));

	if (distanceToOrigin >= 6) cout << "Neutral\n";
	else if (distanceToCenterOfSmallWhiteCircle < 1) cout << "Good\n";
	else if (distanceToCenterOfSmallWhiteCircle == 1) cout << "Neutral\n";
	else if (distanceToCenterOfSmallBlackCircle < 1) cout << "Evil\n";
	else if (distanceToCenterOfSmallBlackCircle == 1) cout << "Neutral\n";
	else if ((x <= 0) && (distanceToCenterOfSmallWhiteCircle > 3)) cout << "Good\n";
	else if (distanceToCenterOfSmallWhiteCircle == 3) cout << "Neutral\n";
	else if (distanceToCenterOfSmallBlackCircle == 3) cout << "Neutral\n";
	else if (distanceToCenterOfSmallBlackCircle < 3) cout << "Good\n";
	else cout << "Evil\n";

	return 0;
}