#include<iostream>
#include<math.h>
using namespace std;

void ChangeDigit(int &number){
    int newNumber = number;
    int pos = 1;
    int pow10 = 1;
    while(number){
        if(number % 10 == 5) newNumber += 3 * pow10;
        number /= 10;
        pos++;
        pow10 *= 10;
    }
    number = newNumber;
}

int main(){
    int number;

    cout << "Enter number: ";
    cin >> number;

    ChangeDigit(number);
    cout << "number = " << number << endl;

    return 0;
}
