// Write a program to count number of vowels in the given file.

#include <bits/stdc++.h>
#include <fstream>
using namespace std ;

int main(){
    fstream obj ;
    string str ;  
    char ch ; 
    int count = 0 ; 

    obj.open("temp.txt" , ios::out) ; 
    getline(cin , str) ; 
    obj << str ;  
    obj.close() ;

    obj.open("temp.txt" , ios::in) ; 

    if(!obj)
    {
        cout << "\n File could not be opened"; 
        exit(1) ; 
    }

    ch = obj.get() ; 

    while(obj)
    {
        if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A' || ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            count++ ; 
        }
        ch = obj.get() ; 
    }
    obj.close() ; 
    cout << "\nTotal number of vowels are: "<<count ; 

    return 0  ;

}
