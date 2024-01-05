//⭐️⭐️  Opening file using open() ;
//   this function is used to open  multiple files  that uses same stream object 

/*

Syntax:-
            file_stream class stream_object ;  
            stream_object.open(“filename”)  ;

*/



/*********** Program for write into file *****************
 
#include <iostream>
#include <fstream> 
using namespace std ; 

int main(){
    ofstream fout ; 
    fout.open("Country.txt") ; 
    fout << "Usa\n" ;
    fout << "india\n" ;
    fout << "Germany\n" ; 
    fout.close() ; 
    fout.open("result.txt") ;
    fout << "goood marks\n" ;
    fout << "not that good" ;

    fout.close() ; 
}

*/


//_---------------------------------------------------------------------------------------

/* -------==== Program for read from file -----------=========
*/

#include <iostream>
#include <fstream>
using namespace std ; 

int main(){
    char s[40];
    ifstream fin ; 

    fin.open("Country.txt") ;

    while(fin){
        fin.getline(s,30) ; 
        cout << s <<endl ;
    }
    fin.close() ; 

    fin.open("result.txt") ;
    while(fin)
    {
        fin.getline(s,40) ; 
        cout << s <<endl ; 
    }
    fin.close() ; 

}







