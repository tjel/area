
# include <iostream>

using namespace std;

int main( ) 
{ 
<<<<<<< HEAD
    float PI = 3.14;                // variables can be initialized during declaration 
    double rad; 
    cout<< "Enter the radius"; 
    cin>>rad;
    if(rad < 0)
	cout<<"Radius has to be a positive real number. Please correct your input\n";
    else 
        cout<< "Area of the circle is: "<< PI * rad * rad << "\n"; 

=======
    double PI = 3.141592653593;                // variables can be initialized during declaration 
    double rad; 
    cout<< "Enter the radius"<<endl; 
    cin>>rad;
    if (rad < 0) cout << "Radius has to be a positive real number. Please correct your input."<<endl;
    else cout << "Area of the circle is: "<<PI * rad * rad<<endl;
>>>>>>> 838c27a5785a633822356200e1d3315fd3f12a24
    return 0;
}
