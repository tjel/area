
# include <iostream>

using namespace std;

int main( ) 
{ 
    float PI = 3.1415;                // variables can be initialized during declaration 
    double rad; 
    cout<< "Enter the radius in cm: "; 
    cin>>rad; 
	if (rad < 0){
	cout<< "Radius has tobe positive number \n";
	}
	else{
    		cout<< "Area of the circle is: "<< PI * rad * rad << " cm\n"; 
    		return 0;
	}
}  
