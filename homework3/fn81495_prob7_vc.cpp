/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 7
* @compiler VC
*
*/
#include<iostream>
using namespace std;

const int MAXSIZE = 10001;
const int maxWordLength = 50;

bool isVowel(char letter) {
	return (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || letter == 'Y' ||
		letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y');
}

void print(char text[]) {
	int size = strlen(text);
	char word[maxWordLength];
	char wordOrdered[maxWordLength];
	int index = 0;
	int i = 0;
	while (i <= size) {
		if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
			word[index] = text[i];
			index++;
		}
		else {
			if (index > 0) {	// index is the length of the word now
				if (word[0] >= 'A' && word[0] <= 'Z') {		// if the first letter is capital
					if (index == 1) {	// if the word has only one letter
						cout << word[0];
						if (isVowel(word[0])) cout << 'w';
						cout << "ay";
					}
					else {		// if the word has more than one letter
						if (word[1] >= 'A' && word[1] <= 'Z') {		// if it is only from capital letters
							if (isVowel(word[0])) {
								for (int j = 0; j < index; j++) cout << word[j];
								cout << "WAY";
							}
							else {
								int j = 1;
								while (j < index && !isVowel(word[j])) j++;
								for (int k = j; k < index; k++) cout << word[k];
								for (int s = 0; s < j; s++) cout << word[s];
								cout << "AY";
							}
						}
						else {		// if only the first letter is capital
							if (isVowel(word[0])) {
								for (int j = 0; j < index; j++) cout << word[j];
								cout << "way";
							}
							else {
								int j = 1;
								while (j < index && !isVowel(word[j])) j++;
								if (j < index) {
									cout << (char)(word[j] - 'a' + 'A');
									for (int k = j + 1; k < index; k++) cout << word[k];
									cout << (char)(word[0] - 'A' + 'a');
									for (int s = 1; s < j; s++) cout << word[s];
								}
								else {
									for (int s = 0; s < index; s++) cout << word[s];
								}
								cout << "ay";
							}
						}
					}
				}
				else { // if the first letter is not capital
					if (isVowel(word[0])) {
						for (int j = 0; j < index; j++) cout << word[j];
						cout << "way";
					}
					else {
						int j = 1;
						while (j < index && !isVowel(word[j])) j++;
						for (int k = j; k < index; k++) cout << word[k];
						for (int s = 0; s < j; s++) cout << word[s];
						cout << "ay";
					}
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
	print(text);
	cout << endl;
	return 0;
}