
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
=======
<<<<<<< HEAD
int main( ) 
{ 
    float PI = 3.14;                // variables can be initialized during declaration 
    double rad; 
    cout<< "Enter the radius"; 
    cin>>rad;
    if(rad < 0)
	cout<<"Radius has to be a positive real number. Please correct your input\n";
    else 
        cout<< "Area of the circle is: "<< PI * rad * rad << "\n"; 

=======
<<<<<<< HEAD
int main( )
{
    double PI = 3.141592653593;                // variables can be initialized during declaration
    double rad;
    cout<< "Enter the radius"<<endl;
    cin>>rad;
    if (rad < 0) cout << "Radius has to be a positive real number. Please correct your input."<<endl;
    else cout << "Area of the circle is: "<<PI * rad * rad<<endl;
>>>>>>> 677effe01e1acb0489d20dd7f577849761fc2818
>>>>>>> 96ddd96ad86fbe2f093f5ba3ffba9d109595ad35
    return 0;
}
