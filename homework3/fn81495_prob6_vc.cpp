/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 6
* @compiler VC
*
*/

#include<iostream>
using namespace std;

const int MAXSIZE = 1000;
 
int main() {
	int rows;
	cin >> rows;

	int fn[MAXSIZE], n[MAXSIZE], swapI;
	double p[MAXSIZE], swapD;

	for (int i = 0; i < rows; i++) {
		cin >> fn[i] >> n[i] >> p[i];
	}

	int min, minPos;
	for (int i = 0; i < rows - 1; i++) {
		min = fn[i];
		minPos = i;
		for (int j = i + 1; j < rows; j++) {
			if (fn[j] < min) {
				min = fn[j];
				minPos = j;
			}
		}
		if (min != fn[i]) {
			swapI = fn[minPos];
			fn[minPos] = fn[i];
			fn[i] = swapI;
			swapI = n[minPos];
			n[minPos] = n[i];
			n[i] = swapI;
			swapD = p[minPos];
			p[minPos] = p[i];
			p[i] = swapD;
		}
	}

	bool flag = true;
	int i = 0, beginsAt;
	while (i < rows) {
		while (fn[i] == fn[i + 1] && i < rows - 1) {
			if (flag) {
				beginsAt = i;
				flag = false;
			}
			i++;
		}
		if (!flag) {
			for (int j = beginsAt; j < i; j++) {
				min = n[j];
				minPos = j;
				for (int k = j + 1; k <= i; k++) {
					if (n[k] < min) {
						min = n[k];
						minPos = k;
					}
				}
				if (min != n[j]) {
					swapI = fn[minPos];
					fn[minPos] = fn[j];
					fn[j] = swapI;
					swapI = n[minPos];
					n[minPos] = n[j];
					n[j] = swapI;
					swapD = p[minPos];
					p[minPos] = p[j];
					p[j] = swapD;
				}
			}
		}
		flag = true;
		i++;
	}

	for (int i = 0; i < rows; i++) {
		cout << fn[i] << " " << n[i] << " " << p[i] << endl;
	}

	return 0;
}