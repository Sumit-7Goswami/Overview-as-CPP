#include <iostream>
using namespace std ; 

class X
{
    public : 
    int a ;
    void f(int b)
    {
        cout << "The value of b is" <<b <<endl ;
    }

};

int main(){
    //declare pointer to data member 
    int X::*ptr = &X::a ; 

    // declare a pointer to member function 
    void (X::*ptr)(int) = &X::f ;

    // create an object of class type X 
    X xobject ;

    // initialize data member 
    xobject.*ptr = 10 ; 
    cout << "The value of a is "<<xobject.*ptr <<endl ; 

    // call member function 
    (xobject.*ptr)(20) ; 
}