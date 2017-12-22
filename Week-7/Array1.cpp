#include<iostream>
using namespace std;

int main() {
	char arr[100];

	cout << "Enter symbols: ";
	cin >> arr;
	int size = strlen(arr);

	for (int i = 0; i < size; i++) {
		if (arr[i] >= '0' && arr[i] <= '9') cout << arr[i] << " ";
	}

	for (int i = 0; i < size; i++) {
		if (arr[i] >= 'a' && arr[i] <= 'z') cout << arr[i] << " ";
	}
	
	for (int i = 0; i < size; i++) {
		if (!(arr[i] >= '0' && arr[i] <= '9') && !(arr[i] >= 'a' && arr[i] <= 'z')) cout << arr[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}