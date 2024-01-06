// --------  Append mode 

#include <iostream>
#include <fstream>
using namespace std ;

int main(){
    char s[30] ; 

    ofstream obj1 ;
    ifstream obj2 ; 

    obj1.open("data" ,ios::app ) ; 
    obj1 << "hello world" ; 

    obj1.close() ; 

    obj2.open("data", ios::in) ;
    obj2.getline(s,30)  ;
    cout << s ;  
}