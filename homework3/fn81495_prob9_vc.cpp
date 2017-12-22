/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 9
* @compiler VC
*
*/
#include<iostream>
using namespace std;

const int MAXSIZE = 10000;

void Swap(int &a, int &b) {
	int swap;
	swap = a;
	a = b;
	b = swap;
}

int main() {
	int N;
	cin >> N;

	int price[MAXSIZE], min[MAXSIZE], mb[MAXSIZE], sms[MAXSIZE];
	for (int i = 0; i < N; i++) {
		cin >> price[i] >> min[i] >> mb[i] >> sms[i];
	}

	int PenkaMin, PenkaMb, PenkaSms;
	cin >> PenkaMin >> PenkaMb >> PenkaSms;
	bool isOK[MAXSIZE];
	for (int i = 0; i < N; i++) {
		isOK[i] = true;
		if ((min[i] < PenkaMin) || (mb[i] < PenkaMb) || (sms[i] < PenkaSms)) isOK[i] = false;
	}

	bool hasSolution = false;
	for (int i = 0; (i < N) && (!hasSolution); i++) {
		if (isOK[i]) hasSolution = true;
	}

	if (!hasSolution) cout << "No solution\n";
	else {
		int MIN, minPos;
		for (int i = 0; i < N - 1; i++) {
			if (isOK[i]) {
				MIN = price[i];
				minPos = i;
				for (int j = i + 1; j < N; j++) {
					if ((isOK[j]) && (price[j] < MIN)) {
						MIN = price[j];
						minPos = j;
					}
				}
				if (MIN != price[i]) {
					Swap(price[i], price[minPos]);
					Swap(min[i], min[minPos]);
					Swap(mb[i], mb[minPos]);
					Swap(sms[i], sms[minPos]);
				}
			}
		}
		for (int i = 0; i < N; i++) {
			if (isOK[i]) cout << price[i] << " " << min[i] << " " << mb[i] << " " << sms[i] << endl;
		}
	}
	//system("pause");
	return 0;
}