#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;

	cout << "Enter string: ";
	cin >> str;

	int sizeStr= str.size();
	bool isPalindrom = true;

	for(int i=0; (i < str.size()) && isPalindrom; i++){
		if (str[i] != str[sizeStr - 1 - i]) {
		isPalindrom = 0;
		}
	}

	if (isPalindrom) cout << "It is a palindrom." << endl;
	else cout << "It is not a palindrom." << endl;

	return 0;
}
