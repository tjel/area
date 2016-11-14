
# include <iostream>

using namespace std;


int main( ) 
{ 
    float PI = 3.1415;                // variables can be initialized during declaration 
    double rad; 
    cout<< "Enter the radius in cm: \n>>"; 
    cin>>rad;
    if(rad < 0) {					// Check if radius positive	
	cout<<"Radius has to be a positive real number. Please correct your input\n";
	}    
    else {
        cout<< "Area of the circle is: "<< PI * rad * rad << "cm\n"; 
	}
	//komentarz na koncu
}
