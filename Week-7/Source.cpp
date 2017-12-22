#include<iostream>
#include<vector>
using namespace std;

int main() {
	char arr[100];

	cout << "Enter symbols: ";
	cin >> arr;
	int size = strlen(arr);

	int symbolCounter[26] = { 0 };

	for (int i = 0; i < size; i++) {
		symbolCounter[arr[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (symbolCounter[i]) cout << (char) ('a' + i) << " -> " << symbolCounter[i] << endl;
	}

	system("pause");
	return 0;
}