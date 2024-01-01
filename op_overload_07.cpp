// program to overload '+' operator to add two objects using friend function of class 

#include <iostream>
using namespace std ; 

class binary
{
    int x, y ; 

    public :
    binary()
    {
        x = 0 ;
        y = 0 ; 
    }

    binary(int x1 , int y1)
    {
        x = x1 ; 
        y = y1 ; 
    }

    friend binary operator+(binary , binary) ; 

    void show_data()
    {
        cout << x << " " << y <<endl ; 
    }
    
}; 

binary operator+(binary obj1 , binary obj2)
{
    binary temp ;

    temp.x  = obj1.x + obj2.x ; 
    temp.y = obj1.y + obj2.y ; 

    return temp ; 
}

int main()
{
    binary obj1(1,2) , obj2(3,4) , obj3 ; 

    obj3 = obj1 + obj2 ; 

    // obj3 = operator+(obj1 , obj2) 

    obj3.show_data() ; 
}