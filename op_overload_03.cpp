//  program to overload unary prefix increment(++) and decrement(--) operator using member function of class  

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

    void operator++()
    {
        cout << "\n Prefix incrememnt: "  ;
        cout << ++x <<endl ;  
    }

    friend void operator--(Number) ; 
};

void operator--(Number obj)
{
    cout <<"\n prefix decrement:" ; 
    cout << --obj.x <<endl ;
}

int main()
{
    Number N1(10), N2(20) ; 

    ++N1 ;
    // N1.operator++() ; 

    --N2 ;
    // operator--(N2) ; 
    return 0 ; 
}
