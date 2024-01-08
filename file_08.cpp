#include <iostream>
#include <fstream>
using namespace std ;

int main(){

    ofstream obj("my1.txt" , ios::trunc) ; 

    obj << "write only this line , and all are clear " ;

    obj.close() ;
}