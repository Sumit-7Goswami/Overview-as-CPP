//  MANIPULATORS

// #include <bits/stdc++.h>
// using namespace std  ; 

// int main(){
//     int i ; 
//     cout <<"enter any number = " ; 
//     cin >>i ; 
//     cout << "Hexadecimal value = " << hex <<i<<endl ; 
//     cout << "Octal value = "  << oct <<i<<endl ; 
//     cout << "Decimal value = " << dec <<i<<endl ; 

// }




// use of setbase()
//  MANIPULATORS

// #include <bits/stdc++.h>
// // #include <iomanip> 
// using namespace std  ; 

// int main(){
//     int num ;
//     cout << "enter numbr in octal form = " ; 
//     cin >> setbase(8) >>num ; 

//     cout <<"Value of number in decimal form = " <<setbase(10) <<num <<endl ; 
//     cout <<"Value of number in octal form = " <<setbase(8) <<num <<endl ; 
//     cout <<"Value of number in hexadecimal form = " <<setbase(16) <<num <<endl ; 


// }




// setw() manipulator
//  MANIPULATORS

// #include <bits/stdc++.h>
// #include <iomanip>
// using namespace std  ; 

// int main(){

//     int age = 22 , rollno = 9101 ; 
//     cout << setw(12) <<"My rollNo is" <<setw(8) << rollno <<endl;  
//     cout << setw(12) <<"My Age is" <<setw(8) << age ;  

// }



// use of setfill() 
 
//  MANIPULATORS

// #include <bits/stdc++.h>
// using namespace std  ; 

// int main(){
//     int age =22  , rollNo = 9101;
//     cout << setfill('#')  ;   // * , & , ^ , % , $ , @ ,!
//     cout << setw(4) << age <<setw(6) << rollNo <<endl ; 
//     cout << setw(6) << age <<setw(8) << rollNo <<endl ; 
      

// // }

// #include <bits/stdc++.h>
// using namespace std ;
// int main(){

//     int x = 786;
//     cout << setfill('*') << setw(6) << x;
//     cout<< setw(6)  << setfill('*') << x;

//     return 0 ;
// }


// setprecision() ; 

//  MANIPULATORS

// #include <bits/stdc++.h>
// using namespace std  ; 

// int main(){
//     double f = 1.22321 ; 
//     cout << setprecision(2)<<f <<endl ;
//     cout<<fixed << setprecision(2)<<f  ;

// }




// scientific manipulator 
// bitset manipulator -----> reprsent number in bits like for 5 , it will give 0000000101




// function overloading 

// #include <iostream>
// using namespace std ; 
// void sum(int , int) ; 
// void sum(double , double) ; 
// void sum(char , char) ;

// int main(){
//     int a=10  , b = 20 ; 
//     double c = 7.23 , d = 8.14 ; 
//     char e = 'a' , f = 'b'  ; 
//     sum(a,b) ; 
//     sum(c,d) ; 
//     sum(e,f) ; 

// }
// void sum(int x , int y){
//     cout << "\n sum of integers are" << x+y  ; 
// }
// void sum(double x , double y){
//     cout << "\n sum of double are" << x+y  ; 
// }
// void sum(char x , char y){
//     cout << "\n sum of chaharater are" << x+y  ; 
// }




// #include <iostream>
// using namespace std ; 

// void fun1(int  , int  ) ; 
// void fun2(int , int , int) ; 

// int main(){

//     int num1 = 1 , num2 = 2 , num3 = 4 ;

//     fun1(num1 , num2) ; 
//     fun2(num1 , num2 , num3) ; 

//     return 0 ; 
// }

// void fun1(int x , int y){
//     cout <<"add of two number is " <<  x+y <<endl;  
// }
// void fun2(int x  , int y , int z){
//     cout << "multiple of three number is " << x*y*z ; 
// }



// friend function 
// 

// Friend Function Explanation in Easy Language:

/* Imagine you have two different classes in your C++ program. These classes are like blueprints for creating objects with certain properties and behaviors. Now, sometimes you might want to allow one class to access private members (variables and functions) of another class. But normally, private members can't be accessed from outside the class.

Here's where friend functions come into play. A friend function is a special function that is not a member of the class but is allowed to access private and protected members of that class. It's like granting special permission to a function to peek inside the private things of a class.

Here's a simple example: Let's say you have two classes, ClassA and ClassB. You want a function from ClassA to be a friend of ClassB. This means that the function from ClassA can access private members of ClassB. */ 



// #include <bits/stdc++.h>
// using namespace std ; 

// class sample{
//     int a , b  ; 
//     public:
//     void get(){
//         cout <<"enter the two numbers" <<endl ; 
//         cin >>a >>b ; 
//     }
//     void show(){
//         cout <<"a="<<a<<"b="<<b<<endl ; 

//     }
//     friend void swap(sample s) ; 
// } ;
// void swap(sample s1){
//     int temp=s1.a  ;
//     s1.a = s1.b  ;
//     s1.b = temp ; 
//     cout <<"a="<<s1.a<<"b="<<s1.b <<endl ;
// }
// int main(){
//     sample s2 ; 
//     s2.get() ; 
//     cout << "before swapping" <<endl ; 
//     s2.show() ; 
//     cout <<"after swapping "<<endl ; 
//     swap(s2) ;     // function call swap(s2) passes the object s2 by value to the friend function 
// } 



// #include <iostream>
// using namespace std ; 

// class second ; 
// class first
// {
//    int a ; 
//     void get(){
//         cout << "enter value a : " ; 
//         cin >> a ; 
//     }
//     friend void swap(first , second) ; 
// } ; 

// class second{
//     int b ; 
//     void get(){
//         cout << "enter value of b: " ; 
//         cin >>b ; 
//     }
//     friend void swap(first , second) ; 
// };

    
// void swap(first ob1, second ob2) {
//     ob1.get() ; 
//     ob2.get() ; 
//     int temp = ob1.a;
//     ob1.a = ob2.b;
//     ob2.b = temp;
//     cout << "After swapping:" << endl;
//     cout << "Value of a: " << ob1.a << endl;
//     cout << "Value of b: " << ob2.b << endl;
// }

// int main() {
//     first ob1;
//     second ob2; 

//     swap(ob1, ob2);


//     return 0;
// }



//  Q create a class X with integer data members  a , class Y with integer data member b and class Z with integer data member c . Write a c++ program to find average of a ,b and c  using friend function . 

/* #include <iostream > 
using namespace std ; 

class Y  ; 
class Z ; 
class X {
    int a ; 
    void get(){
        cout << "enter val of a : " ; 
        cin >> a  ; 
    }
    friend void avg(X ,Y ,Z) ; 

};
class Y {
    int b ; 
    void get(){
        cout << "enter val of b : " ; 
        cin >> b  ; 
    }
    friend void avg(X , Y , Z) ; 

};
class Z{
    int c ; 
    void get(){
        cout << "enter val of c : " ; 
        cin >> c  ; 
    }
    friend void avg(X , Y , Z) ; 

};

void avg(X x ,Y y ,Z z){
    x.get() ; 
    y.get() ; 
    z.get() ;

    int avg  = (x.a + y.b + z.c)/3 ; 
    cout << " avg of three numbers are : "  << avg ; 

    
}

int main(){

    X x ; 
    Y y ; 
    Z z ; 

    avg(x , y , z) ; 
    return 0 ; 
}

*/


// example
/*
#include <iostream> 
using namespace std ; 

class second ; 
class first{
    int a ; 
    void get() 
    {
        cout << "enter the value of a" ; 
        cin >> a ; 
    }
    public : 
    void greatest(second) ; 
}; 

class second{
    int b;  
    void get(){
        cout << "enter the value of b : " ; 
        cin >>b  ; 
    }
    friend void first::greatest(second); 
} ; 

void first ::greatest(second ob2){

    get() ;
    ob2.get() ; 

    if(a>ob2.b){
        cout << "greatest is : "<<a ; 
    }
    else{
        cout << "greatest is: " << ob2.b ; 
    }
}

int main(){
    first ob1 ; 
    second ob2 ;

    ob1.greatest(ob2) ;
    return 0 ;  
}

*/

// #include <iostream>
// using namespace std ; 

// class Test1{
//     int a , b ; 
//     public : 
//     friend class Test2 ; 
//     void getab(){
//         cout << "enter a and b values " ; 
//         cin >> a >> b ; 
//     }

// }; 

// class Test2
// {
//     public : 
//     void putab(Test1 t1){
//         cout << "a="<<t1.a << endl ; 
//         cout << "b="<<t1.b ; 
//     }
// }; 

// int main(){
//     Test1 T1 ;
//     Test2 T2 ;
//     T1.getab() ;
//     T2.putab(T1) ; 
// }



