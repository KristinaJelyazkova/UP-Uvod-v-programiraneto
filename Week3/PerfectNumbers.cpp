#include<iostream>
#include<math.h>
using namespace std;

bool isPerfect(int number){
    if(number == 1) return false;
    int sum = 1;
    for(int i = 2; i < number; i++){
        if(number % i == 0) sum += i;
    }
    if(number == sum) return true;
    else return false;
}

void Perfect(int n){
    for(int i = 2; i <= n; i++){
        if(isPerfect(i)) cout << i << " ";
    }
}

int main(){
    int number;

    cout << "Enter number: ";
    cin >> number;

    Perfect(number);

    return 0;
}
