#include<iostream>
#include<math.h>
using namespace std;

double CircleArea(double radius){
    return M_PI * radius * radius;
}

int main(){
    int radius;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "The area of the circle is " << CircleArea(radius) << endl;

    return 0;
}
