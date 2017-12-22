#include<iostream>
using namespace std;

char* LongestString(char* B, char* C, int &len) {
	int Blength = strlen(B);
	int Clength = strlen(C);
	bool CisInB = true;		// will show if C is found in B
	char* pointerToLongestString = NULL;	// if C is not found in B, the value of pointerToLongestString will remain NULL
	len = -1;	// if C is not found in B, the value of len will remain -1
	char* curPointerToLongestString = NULL;
	int curLen = -1, oldLen = -1;
	int i = 0;
	while (i < Blength) {	// scanning array
		CisInB = true;
		curLen = -1;
		while (CisInB) {	// searching for how many times C is found in B consequently
			if (i + Clength > Blength) CisInB = false;	// checking if we're going out of C
			for (int j = 0; (j < Clength) && CisInB; j++) {
				if (B[i + j] != C[j]) CisInB = false;	// checking element by element if the whole C is found in B
			}
			if (CisInB) {
				if (curLen == -1) {		// if we have found C in B for the first time
					curPointerToLongestString = &B[i];
					curLen = Clength;
				}
				else curLen += Clength;	 // if we have already found C in B at least once and now we have found one more C just after the previous
				i = i + Clength;
			}
			else i++;
		}
		if (curLen != -1) {		// if we have found C in B at least one time
			if (curLen > oldLen) {	// if the current length of the string is bigger than the previous, we take its valueand and redirect thå pointer
				len = curLen;
				pointerToLongestString = curPointerToLongestString;
			}
			oldLen = curLen;	// saving the current length of the string so we can compare it to the next
		}
	}
	return pointerToLongestString;
}

int main() {
	char* B = "abbbbbababcabc";
	char* C = "abc";

	int len;
	char* pointerToLongestString = LongestString(B, C, len);

	if (len == -1) {	// if C is not found in B
		cout << "C is not in B " << " len = " << len;
	}
	else {	// if C is found in B, print the string A and its length len
		for (int i = 0; i < len; i++) {
			cout << *(pointerToLongestString + i);
		}
		cout << " len = " << len;
	}
	cout << endl;

	system("pause");
	return 0;
}