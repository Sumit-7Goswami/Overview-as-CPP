#include <iostream>
#include <fstream>
using namespace std ;

int main(){
    ofstream obj("result.txt" , ios::out) ;

    obj << "India is our country" ;

    cout << obj.tellp()<<endl ; 

    obj << "He is Ram" ; 

    cout << obj.tellp() <<endl ; 

    obj.seekp(5 , ios::beg) ; 

    obj << "he is going to market" ;

    cout << obj.tellp() ;

    obj.close() ;  

}