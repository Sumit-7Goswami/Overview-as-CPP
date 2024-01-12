#include <iostream> 
#include <fstream> 
using namespace std ; 

int main(){
    ifstream obj  ;

    obj.open("data" , ios::in) ; 
    cout << obj.tellg() <<endl ; 

    obj.seekg(2 , ios::beg) ; 
    cout << obj.tellg() <<endl ; 

    obj.seekg(2 , ios::cur) ;
    cout << obj.tellg()<<endl ;

    obj.seekg(-2 , ios::end) ; 
    cout << obj.tellg() <<endl ; 

    string line ; 
    getline(obj , line) ; 
    cout << line ; 
}