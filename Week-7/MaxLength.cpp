#include<iostream>
#include<vector>
using namespace std;
 
int main() {
	double arr[100];
	int size;
	cout << "Enter size of the array: ";
	cin >> size;

	cout << "Enter array: ";
	for (int i = 0; i < size; i++) cin >> arr[i];

	vector <int> Lengths;
	int length = 1;
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] <= arr[i + 1]) length++;
		else if (length > 1) {
			Lengths.push_back(length);
			length = 1;
		}
	}

	cout << "The max length is ";
	if (Lengths.empty()) cout << "0\n";
	else {
		int maxLength = Lengths.back();
		Lengths.pop_back();
		while (!Lengths.empty()) {
			if (Lengths.back() > maxLength) maxLength = Lengths.back();
			Lengths.pop_back();
		}
		cout << maxLength << endl;
	}

	system("pause");
	return 0;
}