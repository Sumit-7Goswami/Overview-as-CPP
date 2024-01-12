#include <bits/stdc++.h> 
#include <fstream>
using namespace std ; 
int main(){
    ifstream obj ; 
    obj.open("question.txt") ;

    cout <<  obj.tellg() <<"\t" ;
    cout << (char)obj.get() <<endl;   // get function will read me value

    obj.seekg(5L , ios::beg) ; 
    
    cout << obj.tellg()<<"\t" ; 
    cout << (char)obj.get()  <<endl; 

    cout << obj.tellg()<<"\t" ;
    cout << (char)obj.get() <<endl ;   

    obj.seekg(3L , ios::cur) ;

    cout << obj.tellg() <<"\t";
    cout << (char)obj.get() <<endl ; 

    obj.seekg(-3L , ios::end) ; 
    cout << obj.tellg() <<"\t";
    cout <<(char)obj.get() <<endl ; 

    obj.close() ;

    cout << "---------------------------" ; 

    ofstream obj1 ;
    obj1.open("data" , ios::in | ios::ate) ;

    cout  << obj1.tellp() << endl;
    
    obj1.seekp(0L , ios::beg) ;
    cout << obj1.tellp() <<endl ;

    string s="what" ; 
    obj1 << s ; 

    cout << obj1.tellp() <<endl ; 


    obj1.seekp(-4L , ios::end) ; 
    cout << obj1.tellp() ; 

    string b ;
    obj1 << b ; 

    cout << obj1.tellp()<<endl ; 










}