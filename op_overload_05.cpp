// program for unary logical NOT (!) operator overloading using member function of class . 

#include <iostream>
using namespace std ;

class Base
{
    private :
    int a ;

    public :
    void read(int x)
    {
        a = x ; 
    }

    void display(void)
    {
        cout << "value of a is: "<< a ; 
    }

    void operator!(void)
    {
        a = !a ; 
    }

};

int main()
{
    Base obj ;
    obj.read(10) ; 
    cout << "before calling operator overloading: " ; 
    obj.display() ; 

    cout << endl ;

    !obj ; 

    cout << "After calling Operator Overloading: " ; 

    obj.display() ; 

    cout << endl ; 
    return 0 ;  
}