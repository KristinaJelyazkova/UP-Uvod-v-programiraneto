#include<iostream>
#include<cstring>
using namespace std; 

void MergeSort1(char str1[], char str2[]) {
	int size1 = strlen(str1),
		size2 = strlen(str2);
	int i = 0, j = 0;
	while (i < size1 && j < size2) {
		if (str1[i] <= str2[j]) {
			cout << str1[i];
			i++;
		}
		else {
			cout << str2[j];
			j++;
		}
	}
	while (i < size1) {
		cout << str1[i]; 
		i++;
	}
	while (j < size2) {
		cout << str2[j];
		j++;
	}
	cout << endl;
}

int main() {
	char str1[21] = "aadgghxyyz";
	char str2[21] = "abcfijkl";
	cout << "aaabcdfgghijklxyyz" << endl;
	MergeSort1(str1, str2);
	cout << endl;
	system("pause");
	return 0;
}