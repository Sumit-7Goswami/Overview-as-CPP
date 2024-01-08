// ----------> ate Vs app mode   <----------

#include <iostream>
#include <fstream>
using namespace std ;

int main(){
    ofstream file1 , file2 ;

    file1.open("my1.txt" , ios::app) ; 
    file2.open("data" , ios::ate) ; 

    file1.seekp(0 , ios::beg) ; 
    file2.seekp(0, ios::beg) ; 

    file1 << "hello" ; 
    file2 << "hello" ; 

    file1.close() ;
    file2.close() ;

    }