#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter number : ";
    cin >> n;

    for(int i = 2; i <= n; i += 3){
        sum += i;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
