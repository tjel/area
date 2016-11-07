# include <iostream>

using namespace std;

<<<<<<< HEAD
int main( ) 
{ 
    float PI = 3.14;                // variables can be initialized during declaration 
    double rad = -2; 
    cout<< "Enter the radius"; 
    cin>>rad;
    if(rad < 0)
	cout<<"Radius has to be a positive real number. Please correct your input"; 
    cout<< "Area of the circle is: "<< PI * rad * rad; 
=======
int main( )
{
    float PI = 3.14;                // variables can be initialized during declaration
    double rad;
    cout<< "Enter the radius";
    cin>>rad;
    if (rad>0){
        cout<< "Area of the circle is: "<< PI * rad * rad;
    } else {
        cout<<"Radius has to be a positive real number. Please correct your input.";
    }
>>>>>>> 7ed9a7d9dee95d9f30d770e499feb8ea032b1d21
    return 0;
}
