#include<iostream>
#include<cmath>
using namespace std;

int main() {
	char a, b, c;
	cin >> a >> b >> c; // naprimer 7+3 ili 10/5

	int a1 = (int)a - 48, c1 = (int)c - 48;

	switch (b) {
	case '+': cout << a1 + c1 << endl; break;
	case '-': cout << a1 - c1 << endl; break;
	case '*': cout << a1 * c1 << endl; break;
	case '/': cout << a1 / c1 << endl; break;
	case '%': cout << a1 % c1 << endl; break;
	case '^': cout << pow(a1, c1) << endl; break;
	default: cout << "There is no such operation." << endl;
	}

	return 0;
}
