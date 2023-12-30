// program to overload unary postfix increment (++) and decrement(--) operator using member function of class ; 

#include <iostream>
using namespace std ;

class Number
{
    int x ;

    public :
    Number(int n)
    {
        x = n ; 
    }
    void operator++(int)
    {
        cout << "\nPostfix increment:" <<endl;
        cout << x++ ;  
    }

    friend void operator--(Number , int);
};

void operator--(Number obj1 , int)
{
    cout << "\n Postfix decrement: " <<endl ; 
    cout << obj1.x-- ; 
}


int main()
{
    Number N1(10) ; 
    N1++ ; 

    // N1.operator++(100) ; 
    // member function / instead of 0 ,  any integer can be passed(no difference) 

    N1-- ; 

    operator--(N1 , 100) ; // friend function 

    return 0 ;
}
