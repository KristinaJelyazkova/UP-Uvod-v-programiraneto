#include<iostream>
using namespace std;

int PeriodInArray(int *arr, int size) {
	int period = 0;
	bool exist = false;
	for (int j = 1; j < size && !exist; j++) {
		if (arr[0] == arr[j]) {
			period = j;
			exist = true;
		}
	}
	if (!exist) return -1;
	else {
		for (int i = period; i < size; i++) {
			if (arr[i] != arr[i - period]) return -1;
		}
		return period;
	}
}

int main() {
	int array[20] = {1,2,3,4,1,2,3,4,1,3};
	int period = PeriodInArray(array, 10);
	if (period == -1) cout << "There is no period.\n";
	else cout << "The period is " << period << endl;
	system("pause");
	return 0;
}