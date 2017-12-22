#include<iostream>
#include<math.h>
using namespace std;

bool isDivisible(int number){
    int sum = 0;
    while(number){
        sum += (number / 10) % 10;
        number /= 10;
    }
    return ( (sum % 3) == 0 );
}

int main(){
    int number;

    cout << "Enter number: ";
    cin >> number;

    if(isDivisible(number)) cout << "Yes." << endl;
    else cout << "No." << endl;

    return 0;
}
