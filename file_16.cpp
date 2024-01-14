// put() --> this function write a single character to the associated stream ;
// get() --> reads a single character 

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std ;
 
int main(){
    char ch[80] ; 
    cout << "enter a string: " ; 

    cin.getline(ch,80) ; 

    cout <<ch <<endl ; 

    int len = strlen(ch) ; 

    fstream f1 ;
    f1.open("result.txt" , ios::in | ios::out);

    for(int i=0 ; i<len ; i++)
    {
        f1.put(ch[i]) ; 
    }
    
    f1.seekg(0 , ios::beg) ; 

    cout << "Entered string is: " ;

    for(int i=0 ; i<len ; i++)
    {
        f1.get(ch[i]) ; 
    } 

    f1.close() ; 

    cout << ch ; 

}