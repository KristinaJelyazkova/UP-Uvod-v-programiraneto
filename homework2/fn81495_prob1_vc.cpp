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
#include<cmath>
using namespace std;

const double PI = 3.14;
const double eps = 0.01;

bool isOnTheField(double x, double y) {
	return (-5 - x < eps && x - 5 < eps && -2 - y < eps && y - 2 < eps);
}

double Dist(double x1, double y1, double x2, double y2) {
	bool isNewPointOnTheField = isOnTheField(x1, y1),
		isOldPointOnTheField = isOnTheField(x2, y2);
	if (!isNewPointOnTheField && !isOldPointOnTheField) return 0;
	if (!isNewPointOnTheField || !isOldPointOnTheField) {
		bool flag = true;
		double newx, newy;
		if (y2 - y1 < eps && y2 - y1 > -eps) flag = false;
		newx = (2 - y1) * (x2 - x1) / (y2 - y1) + x1;
		bool flag1 = (!isNewPointOnTheField && 2 - y1 < eps && y2 - 2 < eps),
			flag2 = (!isOldPointOnTheField && 2 - y2 < eps && y1 - 2 < eps);
		if (-5 - newx < eps && newx - 5 < eps && flag && (flag1 || flag2)) {
			if (flag1) {
				x1 = newx;
				y1 = 2;
			}
			else if(flag2) {
				x2 = newx;
				y2 = 2;
			}
		}
		else {
			newx = (-2 - y1) * (x2 - x1) / (y2 - y1) + x1;
			bool flag3 = (!isNewPointOnTheField && -2 - y2 < eps && y1 + 2 < eps),
				flag4 = (!isOldPointOnTheField && -2 - y1 < eps && y2 + 2 < eps);
			if (-5 - newx < eps && newx - 5 < eps && flag && (flag3 || flag4)) {
				if (flag3) {
					x1 = newx;
					y1 = -2;
				}
				else if(flag4){
					x2 = newx;
					y2 = -2;
				}
			}
			else {
				flag = true;
				if (x2 - x1 < eps && x2 - x1 > -eps) flag = false;
				newy = (5 - x1) * (y2 - y1) / (x2 - x1) + y1;
				bool flag5 = (!isNewPointOnTheField && 5 - x1 < eps && x2 - 5 < eps),
					flag6 = (!isOldPointOnTheField && 5 - x2 < eps && x1 - 5 < eps);
				if (-2 - newy < eps && newy - 2 < eps && flag && (flag5 || flag6)) {
					if (flag5) {
						x1 = 5;
						y1 = newy;
					}
					else if(flag6){
						x2 = 5;
						y2 = newy;
					}
				}
				else {
					newy = (-5 - x1) * (y2 - y1) / (x2 - x1) + y1;
					bool flag7 = (!isNewPointOnTheField && -5 - x2 < eps && x1 + 5 < eps),
						flag8 = (!isOldPointOnTheField && -5 - x1 < eps && x2 + 5 < eps);
					if (-2 - newy < eps && newy - 2 < eps && flag && (flag7 || flag8)) {
						if (flag7) {
							x1 = -5;
							y1 = newy;
						}
						else if(flag8){
							x2 = -5;
							y2 = newy;
						}
					}
				}
			}
		}
	}
	double dif1 = abs(x1 - x2),
		dif2 = abs(y1 - y2);
	double dist = sqrt((dif1*dif1) + (dif2*dif2));
	return (((PI * dist) / 2) + dist) / 2;
}

int main() {
	int n;
	cin >> n;

	double x, y,
		distance = 0;
	cin >> x >> y;
	double oldx = x, oldy = y;
	for (int i = 2; i <= n; i++) {
		cin >> x >> y;
		distance += Dist(x, y, oldx, oldy);
		oldx = x;
		oldy = y;
	}

	printf("%.3lf", distance);
	cout << endl;
	return 0;
}