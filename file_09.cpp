#include <iostream> 
#include <fstream> 
using namespace std ; 


// for this we have to create first the file names in the copiler using .txt
int main()
{
    char quest[80] , ans[80] ; 

    ifstream obj  ; 

    obj.open("question.txt") ;
    cout << "\n************Sample Question for Quiz Contest *********" ;

    while(obj.eof()==0)  // first way-Using eof() [returns 0 until unless end of file is not reached]
    {
        obj.getline(quest,80) ; 
        cout <<"\n"<<quest ; 
    }

    obj.close() ; 
    
    obj.open("answer.txt") ; 
    cout <<"\n\n******Answers for sample question*********" ;

    while(obj)   //second way-Using obj name
    {
        obj.getline(ans,80) ; 
        cout <<endl <<ans; 

    }
    obj.close() ; 

    return 0 ; 
}