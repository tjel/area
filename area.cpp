
# include <iostream>

using namespace std;

<<<<<<< HEAD
int main( )
{
    double PI = 3.14159265359;                // variables can be initialized during declaration
    double rad;
    cout<< "Enter the radius"<<endl;
    cin>>rad;
    if (rad>0){
        cout<< "Area of the circle is: "<< PI * rad * rad<<endl;}
    else {
        cout<<"Radius has to be a positive real number. Please correct your input."<<endl;}
}
