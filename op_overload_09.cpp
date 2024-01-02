// program to overload ' + ' operator to add two complex number using friend function of class 

#include <iostream>
using namespace std ; 

class complex{
    int real ;
    int imag ;

    public :


    void getdata(){
        cout << "enter real part : " ; 
        cin >> real ;
        cout << "enter imag part : " ; 
        cin >> imag ; 
        
    }

    void display()
    {
        cout << "Sum = "<<real <<" + " <<imag <<"i" <<endl ;
    }

    friend complex operator+(complex , complex); 

};

complex operator+(complex c1 , complex c2)
{
    complex temp ; 
    temp.real = c1.real + c2.real ; 
    temp.imag = c1.imag + c2.imag ; 
    return temp ; 
}

int main(){
    complex c1 , c2 , c3 ; 
    c1.getdata() ;
    c2.getdata() ; 

    // c3 = c1 + c2 ; 

    c3 = operator+(c1,c2) ;
    c3.display() ;
    return 0 ; 
}