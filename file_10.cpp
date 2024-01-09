// use of is_open() function ; 


#include <iostream> 
#include <fstream> 
using namespace std ; 

int main(){
    ofstream obj  ;
    obj.open("data") ; 

    if(obj.is_open()){
        obj << "india is my country" ; 
        cout << "operation done successfully" ;
        obj.close() ; 

    }
    else{
        cout << "it does not open , operation uncessufull" ; 
    }

    return 0 ; 
}
