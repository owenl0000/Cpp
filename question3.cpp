#include <iostream>
using namespace std;

int main() {
    double radius;
    double area;
    double circumference;
    const double PI = 3.14;

    cout << "Enter the radius: ";
    cin >> radius;
    cout << endl;
    
    area = PI * radius * radius;
    cout << "Area = " << area << endl;
    
    circumference = 2 * PI * radius;
    cout << "Circumference = " << circumference << endl;
    
    return 0;
}