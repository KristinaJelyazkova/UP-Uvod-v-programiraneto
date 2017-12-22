#include<iostream>
using namespace std;

bool isExp2(int number) {
	return (number & (number - 1)) == 0;
}

int main() {
	int a = -3219;
	unsigned int b = abs(a);
	//cout << isExp2(a) << endl;
	cout << ~a << endl;
	cout << "-" << ~b << endl;
	system("pause");
	return 0;
}