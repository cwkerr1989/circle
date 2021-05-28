#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radius;
    double pi = 2 * asin(1.0);

    cout << "Enter radius\n";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is: ";
    cout << pow((pi * radius), 2) << endl;
    cout << "The circumference of a circle with radius " << radius << " is: " << 2 * pi * radius;

    return 0;
}
