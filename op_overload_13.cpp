// program to overload equality operator

#include <iostream>
using namespace std ; 
class equality{
    int x , y ;
    public :
    equality()
    {
        x=0 ;
        y=0 ; 
    }

    equality(int a , int b)
    {
        x=a ; 
        y=b ; 
    }

    bool operator==(equality obj)
    {
        if((x==obj.x)&&(y==obj.y))
        {
            return 1 ; 
        }

        else{
            return 0 ; 
        }
    }

};
int main()
{
    equality obj1(3,3) , obj2(3,6) ; 

    if(obj1==obj2)
    {
        //or       if(obj1.operator==(obj2))
        cout << "\n values of x and y for obj1 and obj2 are same " ; 
    }
    else
    {
        cout << "\n Values of x and y for obj1 and obj2 are not same" ; 
    }
}