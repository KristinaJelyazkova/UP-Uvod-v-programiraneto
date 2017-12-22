//sort(a, a + n); a - pointer to first element, n - pointer to last element; library  - algorithm;
#include<iostream>
using namespace std;

void createArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "]=";
		cin >> arr[i];
	}
}

void sortArray(int *arr, int n) {
	int maxPos;

	for (int i = 0; i < n - 1; i++) {
		maxPos = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[maxPos]) maxPos = j;
		}
		if (maxPos != i) swap(arr[i], arr[maxPos]);
	}
}

void printArray(int *arr, int n) {
	cout << "Printing arr:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}

}

bool isFromArray(int *arr, int n, int k) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) return true;
	}
	return false;
}

int* mergeArrays(int *arr1, int n1, int *arr2, int n2) {
	int *newArr = new int[n1 + n2];
	for (int i = 0; i < n1; i++) {
		newArr[i] = arr1[i];
	}
	for (int i = 0; i < n2; i++) {
		newArr[i + n1] = arr2[i];
	}
	return newArr;
}

void arraysSection(int *arr1, int n1, int *arr2, int n2) {
	bool equalNumbers = false;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (arr2[j] == arr1[i]) {
				cout << arr2[j] << " ";
				equalNumbers = true;
			}
		}
	}
	if (!equalNumbers) cout << "There are no numbers in the section of the two arrays.";
	cout << endl;
}

int* arrayWithoutRepetition(int *arr, int n, int &newArrSize) {
	int* newArr = new int[n];
	int k = 0;
	bool isDifferent = true;
	newArr[0] = arr[0];
	for (int i = 1; i < n; i++) {
		isDifferent = true;
		for (int j = i - 1; j >= 0; j--) {
			if (arr[i] == arr[j]) {
				isDifferent = false;
			}
		}
		if (isDifferent) newArr[++k] = arr[i];
	}
	newArrSize = k + 1;
	return newArr;
}

int main() {

	int n1;
	//int n2;
	cout << "n1=";
	cin >> n1;
	//cout << "n2=";
	//cin >> n2;

	int *arr1 = new int[n1];
	//int *arr2 = new int[n2];

	createArray(arr1, n1);
	//createArray(arr2, n2);
	//sortArray(arr, n);
	//printArray(arr, n);
	/*int k; // proveriava dali k e raven na element ot masiva
	cout << "k=";
	cin >> k;
	if (isFromArray(arr, n, k)) cout << k << " is from the array." << endl;
	else cout << k << " is not from the array." << endl;*/

	/*int newN = n1 + n2;
	int *newArr = new int[newN];
	newArr = mergeArrays(arr1, n1, arr2, n2);
	sortArray(newArr, newN);
	printArray(newArr,newN);*/

	//arraysSection(arr1, n1, arr2, n2);

	int newArrSize = 0;
	int *newArr = arrayWithoutRepetition(arr1, n1, newArrSize);
	//printArray(newArr, newArrSize);
	sortArray(newArr, newArrSize);
	int k;
	cout << "k=";
	cin >> k;
	if (k > newArrSize) cout << "No such number." << endl;
	else cout << "The k biggest element is " << newArr[k - 1] << endl;


	delete arr1;
	//delete arr2;
	//delete newArr;

	system("pause");
	return 0;
}