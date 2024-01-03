// program to overload  * and  /   operator using member function of class  and friend function respectively  .



#include <iostream>
using namespace std;

class binary
{
    int x;

public:
    binary()
    {
        x = 0;
    }

    binary(int num)
    {
        x = num;
    }

    binary operator*(const binary& obj1)
    {
        binary temp;
        temp.x = x * obj1.x;
        return temp;
    }

    friend binary operator/(const binary& obj1, const binary& obj2);

    void show_data()
    {
        cout << x << endl;
    }
};

binary operator/(const binary& obj1, const binary& obj2)
{
    binary div;
    div.x = obj1.x / obj2.x;
    return div;
}

int main()
{
    binary o1(4), o2(2), o3;
    o3 = o1 * o2; 
    // o3 = operator*(o2 , o3) ;   --- > we cannot call using this line , the reason is                                   written below 

    cout << "Multiplication " << endl;

    o3.show_data();

    binary o4, o5(6), o6(3);

    cout << "Division " << endl;

    // o4 = o5 / o6;
    o4 = operator/(o5 , o6) ; 

    o4.show_data();

    return 0;
}

/*
in the following code , why we can't use this line of code for call the function 
// o3 = operator*(o2 , o3) ;  
ChatGPT
In your code, you've already defined the operator* as a member function of the binary class, which allows you to use the * operator with objects of the binary class using the standard syntax like o1 * o2. You don't need to use the operator* function explicitly in the form operator*(o1, o2) because it's an overloaded operator that works directly on objects of the class.

So, when you write o3 = o1 * o2;, it is calling the binary class's operator* member function to perform the multiplication.

However, you can use the explicit form operator*(o1, o2) if you define a global (non-member) function for the operator overload outside the class definition. In your original code, you didn't have such a global operator* function, and there was no need for one since you already overloaded * as a member function.

*/