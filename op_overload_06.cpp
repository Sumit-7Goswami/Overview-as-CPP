// binary operator 

// program to overload '+' operator to add two object using member function of class . 

#include <iostream>
using namespace std ;

class Test
{
    int a ;

    public :

    void get_data()
    {
        cout <<"enter any number = " ; 
        cin >> a ; 
    }

    void display()
    {
        cout << "sum = "<<a <<endl ; 
    }

    Test operator+(Test t1)
    {
        t1.a = a + t1.a ; 
        return t1 ; 
    }
};

int main(){
    Test t1 , t2 , t3 ;
    t1.get_data() ;
    t2.get_data();

    t3 = t1 + t2 ; 

    t3.display();
    return 0 ; 
}



/*
This code defines an operator overloading function for the + operator within the Test class. This function allows you to use the + operator to add two Test objects together.

Here's how it works step by step, considering you input 4 and 5 as values for t1 and t2:

When you write t3 = t1 + t2; in the main() function, it invokes the operator+ function for t1.

Inside the operator+ function, t1 is passed as an argument. t1.a represents the a member of the t1 object passed to this function, which initially contains the value 4 (from your input).

a inside the class Test refers to the a member of the current object (in this case, t1).

The line t1.a = a + t1.a; adds the a member of the current object (t1.a) to the a member of the object passed as an argument (t1.a). So, it calculates 4 + 5, which is 9, and assigns this value back to t1.a. After this line, t1.a contains 9.

Finally, the modified t1 object (with a equal to 9) is returned from the operator+ function.

So, after t3 = t1 + t2;, the value of t3.a will be 9 because the + operator was overloaded to perform the addition of the a members of two Test objects and store the result in the a member of the first object (t1 in this case).





*/