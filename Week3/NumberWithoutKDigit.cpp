#include<iostream>
#include<math.h>
using namespace std;

int newNumber(int number, int k){
    int firstPart, secondPart;
    int pow10 = 1;
    for(int i = 1; i <= k - 1; i++){
        pow10 *= 10;
    }
    secondPart = number % pow10;
    number /= (pow10 * 10);
    firstPart = number * pow10;
    return firstPart + secondPart;
}

int main(){
    int number,k;

    cout << "Enter number: ";
    cin >> number;

    cout << "Enter k: ";
    cin >> k;


    cout << "The new number is " << newNumber(number,k);

    return 0;
}
