#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double side1, side2, side3, semiper, area;

    cout << "side1 = ";
    cin >> side1;

    cout << "side2 = ";
    cin >> side2;

    cout << "side3 = ";
    cin >> side3;

    if( (side1 + side2 > side3) && (side1 + side3 > side2) && (side3 + side2 > side1) ){
        semiper = (side1 + side2 + side3) / 2;
        area = sqrt(semiper * (semiper - side1) * (semiper - side2) * (semiper - side3));
        cout << "area = " << area << endl;
    } else cout << "There is no such triangle." << endl;
    return 0;
}
