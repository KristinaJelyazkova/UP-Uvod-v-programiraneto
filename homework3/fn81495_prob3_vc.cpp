/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 3
* @compiler VC
*
*/
#include<iostream>
using namespace std;

const int MAXSIZE = 10001;
const int maxWordLength = 50;

void print(char text[], int N) {
	int size = strlen(text);
	char word[maxWordLength];
	char wordOrdered[maxWordLength];
	int index = 0;
	int i = 0;
	while (i <= size) {
		if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z') ||
			(text[i] == '-' && i > 0 && i < size - 1 &&
			(((text[i - 1] >= 'A' && text[i - 1] <= 'Z') || (text[i - 1] >= 'a' && text[i - 1] <= 'z')) &&
				((text[i + 1] >= 'A' && text[i + 1] <= 'Z') || (text[i + 1] >= 'a' && text[i + 1] <= 'z'))))) {
			word[index] = text[i];
			index++;
		}
		else {
			if (index > 0) {
				for (int j = 0; j < index; j++) {
					wordOrdered[(j + N) % index] = word[j];
				}
				for (int j = 0; j < index; j++) {
					cout << wordOrdered[j];
				}
				index = 0;
			}
			if (i != size) cout << text[i];
		}
		i++;
	}
}

int main() {
	char text[MAXSIZE];
	cin.getline(text, MAXSIZE);
	int N;
	cin >> N;
	print(text, N);
	cout << endl;
	return 0;
}