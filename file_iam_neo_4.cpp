#include <iostream>
#include <fstream>
using namespace std ;

int main(){
    string text ; 
    getline(cin , text) ; 
    fstream obj ; 
    
    obj.open("sample.txt" , ios::out) ;
    
    obj<<"Time is a Great Teacher BUT Unfortunately it Kills All Its Pupils " ; 
    
    obj.close() ; 
    
    
    obj.open("sample.txt" ,ios::app ) ;
    cout << "Data appended successfully"<<endl ; 
    obj.seekp(-1L , ios::end); 
    
    obj <<" " <<text ; 
    
    obj.close() ; 
    
    obj.open("sample.txt" , ios::in) ;
    string word  ;
    while(obj>>word){
        cout << word<<" "; 
    }
    
}