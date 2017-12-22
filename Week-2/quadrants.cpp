#include<iostream>
using namespace std;

int main() {
	double x, y;

	cout << "Enter x coordinate:";
	cin >> x;
	cout << "Enter y coordinate:";
	cin >> y;

	if (x == 0 && y == 0) cout << "The point is O." << endl;
	else if (x == 0) cout << "The point is on Oy." << endl;
	else if (y == 0) cout << "The point is on Ox." << endl;
	else if (x > 0 && y > 0) cout << "The point is in I quadrant." << endl;
	else if (x < 0 && y > 0) cout << "The point is in II quadrant." << endl;
	else if (x < 0 && y < 0) cout << "The point is in III quadrant." << endl;
	else if (x > 0 && y < 0) cout << "The point is in IV quadrant." << endl;

	return 0;
}