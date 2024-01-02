// program to overload '+' operator to add two complex number using member function of class .

#include <iostream>
using namespace std ; 

class complex{
    int real ; 
    float imag ;

    public :
    void getdata()
    {
        cout << "enter real part = " ; 
        cin >> real ; 
        cout << "enter imag part = " ; 
        cin >> imag ; 
    }

    void display()
    {
        cout << "Sum = "<<real << " + " <<imag <<"i" <<endl ; 
    }

    complex operator+(complex c1)
    {
        complex temp ; 
        temp.real = real + c1.real  ;
        temp.imag = imag + c1.imag ; 
        return temp ;  
    }

} ;


int main()
{
    complex c1 , c2 , c3 ;
    c1.getdata();
    c2.getdata();
    c3 = c1 + c2 ; 

    c3.display() ; 

    return 0 ; 
}