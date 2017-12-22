#include<iostream>
#include<math.h>
using namespace std;

bool isPalindrom(int number){
    int n = number, digitsCounter = 0;

    while(n){
        n /= 10;
        digitsCounter++;
    }

    int digits[digitsCounter];
    int powi = 1;

    for( int i = 0; i < digitsCounter; i++){
        digits[i] = ( number / powi ) % 10;
        powi *= 10;
    }

    for( int i = 0; i <= digitsCounter / 2 ; i++){
        if( digits[i] != digits[digitsCounter - i -1] ) return false;
    }

    return true;
}

int main() {
	int number;

	cout << "Enter number: ";
	cin >> number;

	if (isPalindrom(number)) cout << "It is a palindrom." << endl;
	else cout << "It is not a palindrom." << endl;

	return 0;
}
