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
	int x1, y1, h1, w1;
	cin >> x1 >> y1 >> h1 >> w1;

	int x2, y2, h2, w2;
	cin >> x2 >> y2 >> h2 >> w2;

	int newx1, newx2, newWidth;

	if (x1 <= x2) newx1 = x2;
	else newx1 = x1;

	if (x1 + w1 <= x2 + w2) newx2 = x1 + w1;
	else newx2 = x2 + w2;

	if (newx1 >= newx2) cout << "0\n";
	else {
		newWidth = newx2 - newx1;

		int newy1, newy2, newHeight;
		if (y1 <= y2) newy1 = y2;
		else newy1 = y1;

		if (y1 + h1 <= y2 + h2) newy2 = y1 + h1;
		else newy2 = y2 + h2;

		if (newy1 >= newy2) cout << "0\n";
		else {
			newHeight = newy2 - newy1;
			cout << newWidth * newHeight << "\n";
		}
	}

	return 0;
}