#include<iostream>
using namespace std;

char* replaceFirst(char* pch, const char* findWhat, char* replaceWith) {
	int pchLength = strlen(pch);
	int findWhatLength = strlen(findWhat);
	int replaceWithLength = strlen(replaceWith);

	int i = 0;
	bool isFound = true;
	bool toStop = false;		// we will use toStop to stop the searching for findWhat once it is found

	char* result = new char[pchLength + abs(findWhatLength - replaceWithLength) + 1]; 
	int resultIndex = 0;

	while (i < pchLength) {   // scanning the array pch
		isFound = true;
		for (int j = 0; (j < findWhatLength) && isFound && !toStop; j++) {		// checking if there is findWhat in pch
			if (pch[i + j] != findWhat[j]) isFound = false;
		}
		if (isFound && !toStop) {
			for (int k = 0; k < replaceWithLength; k++) {		// if findWhat is found we put replaceWith in result element by element
				result[resultIndex] = replaceWith[k];
				resultIndex++;
			}
			i += findWhatLength;		// skip findWhat in pch
			toStop = true;
		}
		else {
			result[resultIndex] = pch[i];
			resultIndex++;
			i++;
		}
	}
	result[resultIndex] = '\0';		// creating null-terminated string

	return result;
}

char* reverseString(const char* str) {		// reversing the string 
	int strLength = strlen(str);
	char* result = new char[strLength + 1];
	for (int i = 0; i < strLength; i++) {
		result[i] = str[strLength - 1 - i];
	}
	result[strLength] = '\0';
	return result;
}

char* replaceLast(char* pch, const char* findWhat, char* replaceWith) {		// reversing pch, findWhat and replaceWith then using replaceFirst, then reversing the result
	const char* reversedResult = replaceFirst(reverseString(pch), reverseString(findWhat), reverseString(replaceWith));
	char* result = reverseString(reversedResult);
	return result;
}

char* replaceAll(char* pch, const char* findWhat, char* replaceWith) {		// the same as replaceFirst, but without the stopring variable toStop
	int pchLength = strlen(pch);
	int findWhatLength = strlen(findWhat);
	int replaceWithLength = strlen(replaceWith);

	int i = 0;
	bool isFound = true;

	char* result = new char[pchLength + replaceWithLength * abs(findWhatLength - replaceWithLength) + 1];
	int resultIndex = 0;

	while (i < pchLength) {
		isFound = true;
		for (int j = 0; (j < findWhatLength) && isFound; j++) {
			if (pch[i + j] != findWhat[j]) isFound = false;
		}
		if (isFound) {
			for (int k = 0; k < replaceWithLength; k++) {
				result[resultIndex] = replaceWith[k];
				resultIndex++;
			}
			i += findWhatLength;
		}
		else {
			result[resultIndex] = pch[i];
			resultIndex++;
			i++;
		}
	}
	result[resultIndex] = '\0';

	return result;
}

int main() {
	char* pch = "aaaabcbabcabcabbb";
	const char* findWhat = "abc";
	char* replaceWith = "qwerty";

	/*char* result = replaceFirst(pch, findWhat, replaceWith);
	for (int i = 0; i < strlen(result); i++) {
		cout << result[i];
	}
	cout << endl;*/

	/*char* result = replaceLast(pch, findWhat, replaceWith);
	for (int i = 0; i < strlen(result); i++) {
		cout << result[i];
	}
	cout << endl;*/

	char* result = replaceAll(pch, findWhat, replaceWith);
	for (int i = 0; i < strlen(result); i++) {
		cout << result[i];
	}
	cout << endl;

	delete[] result;

	system("pause");
	return 0;
}