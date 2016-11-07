# include <iostream>

using namespace std;

int main( ) 
{ 
    double PI = 3.141592653593;                // variables can be initialized during declaration 
    double rad; 
    cout<< "Enter the radius"<<endl; 
    cin>>rad; 
    cout<< "Area of the circle is: "<< PI * rad * rad<<endl;
    if (rad < 0) 
	{
        	cout << "Radius has to be a positive real number. Please correct your input.";
	}
    else
	{
		cout<< "Area of the circle is: "<< PI * rad * rad;
	}
    return 0;
}
