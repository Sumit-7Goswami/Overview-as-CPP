// program to overload greater than operator

#include <iostream>
using namespace std ;

class greater1
{
    int x ; 
    public : 
    greater1(int a)
    {
        x=a ; 
    }

    bool operator>(greater1 obj)
    {
        if(x>obj.x){
            return 1 ; 
        }
        else{
            return 0 ; 
        }
    }

    friend bool operator!=(greater1 , greater1) ; 
};

bool operator!=(greater1 obj1 , greater1 obj2)
{
    if(obj1.x != obj2.x)
    {
        return 1 ; 
    }
    else{
        return 0 ; 
    }
}

int main()
{

    greater1 obj1(3) , obj2(2) ; 

    if(obj1>obj2)
    {
        //or   if(obj1.operator > (obj2) )
        cout << "\n obj1 is greater than obj2" ; 
    }
    else{
        cout <<"\n obj2 is greater than obj1" ; 
    }

    if(obj1 != obj2)
    {
        cout << "\n obj1 is not equal to obj2" ; 
    }
    else{
        cout << "\n obj1 and obj2 are equal" ; 
    }
    
}