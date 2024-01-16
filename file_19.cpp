// Write a program to compare contents of two files

#include <iostream>
#include <fstream>
using namespace std ; 

int main(){
    fstream obj1 , obj2 ; 
    char ch1 , ch2 ;

    char fname1[40] , fname2[40] ; 

    cout << "enter name of first file: " ; 
    cin.getline(fname1 , 20) ;

    cout <<"enter name of second file: " ; 
    cin.getline(fname2 , 20) ; 

    obj1.open(fname1 , ios::in) ; 
    obj2.open(fname2 , ios::in) ;  

    if(!obj1 || !obj2)
    {
        cout <<"\n File could not be opened"; 
        exit(1) ; 
    }
    
    ch1 = obj1.get();
    ch2 = obj2.get() ;

    while((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2))
    {
        ch1 = obj1.get();
        ch2 = obj2.get();
    }

    if(ch1==ch2){
        cout <<"files are identical" ; 
    }
    else if(ch1 != ch2)
    {
        cout << "Files are not identical" ; 
    }

    obj1.close();
    obj2.close();
return 0  ;
}