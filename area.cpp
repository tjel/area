# include <iostream>

using namespace std;

int main( )
{
    float PI = 3.14;                // variables can be initialized during declaration
    double rad;
    cout<< "Enter the radius";
    cin>>rad;
    if (rad < 0) {
        cout << "Radius has to be a positive real number. Please correct your input.";
    } else{
    cout<< "Area of the circle is: "<< PI * rad * rad;}
    return 0;
}
