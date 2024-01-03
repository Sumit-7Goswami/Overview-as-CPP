// program to overload logical or operator 

#include <iostream>
using namespace std ;

class logical{
    int x ;
    public :
    logical()
    {
        x = 0 ; 
    }

    logical(int a)
    {
        x=a ; 
    }

    bool operator&&(logical obj)
    {
        return (x && obj.x ) ; 
    }

    friend bool operator||(logical , logical) ; 

    void show_data()
    {
        cout << x <<endl; 
    }

};
bool operator||(logical o1 , logical o2)
{
    return (o1.x || o2.x) ; 
}

int main()
{
    logical obj1(2) , obj2(0) , obj3  ; 

    // int x = operator&&(obj1 , obj2);   --> we cannot use this for this custom operaotr classes


    // obj3 = obj1 && obj2 ; 
    // obj3.show_data() ; 
    

    int x = obj1 && obj2 ; 
    cout << x <<endl ; 

    int y = obj1||obj2 ; 
    cout << y << endl ; 

    return 0 ; 
}