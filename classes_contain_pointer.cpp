// #include <iostream>
// using namespace std ; 

// class fact1{
//     int *fact ; 
//     int num ; 

//     public :
//     void factorial(int n) {
//         num = n ;
//         fact = new int(1)  ;

//         for(int i=1 ;i<=num ;i++)
//         {
//             *fact = *fact*i ; 
//         }
//         cout << *fact ; 
//     }

// } ;


// int main(){
//     fact1 a ; 
//     int n;
//     cout << "Enter the number : " << endl ; 
//     cin >>n ; 
//     a.factorial(n) ; 
// }


#include <iostream>
using namespace std ; 

class person{
    char name[20] ;
    int age ; 

    public : 
    void getdata(){
        cout << "enter name and age: " ; 
        cin >> name >> age ; 
    }

    void display(){
        cout << name <<"\t" << age ;
    }
} ;

int main(){

    person x , *ptr ; 

    ptr = &x ; 
    ptr -> getdata() ;   // through address
    ptr -> display() ;

    cout << endl ;

    (*ptr).getdata() ;   // through value 
    (*ptr).display() ;
    
    return 0 ;
}
