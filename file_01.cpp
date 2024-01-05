
// - write in a File👇👇👇👇👇👇

/*
#include <iostream>
#include <fstream>
using namespace std ;

int main(){
    ofstream file("file1.txt") ; 

    file << "how are you guys " ; 

    file.close() ;

}
*/



// read from a file 👇👇👇👇👇
/*
#include <iostream>
#include <fstream>
using namespace std ;

int main(){

    string text ;
    ifstream file("file1.txt") ; 

    while(getline(file , text)){
        cout <<  text ; 
    }
    file.close() ; 

}
*/



// --------------- example  --👇👇--------- -
/*
#include <iostream>
#include <fstream>
using namespace std ;

int main(){

    ofstream myfile("result.txt") ; 
    myfile << "in the house bab" ; 

    myfile.close() ; 

    cout << "data saved" ; 
    return 0 ;
}
*/


/*
#include<iostream> 
#include<fstream>  
using namespace std;  
int main()
{
    char s[10];
    ifstream inf("result.txt");  
    inf>>s;
    inf.close(); 
    cout<<s;
}

*/

/*
#include<iostream> 
#include<fstream>  
using namespace std;  
int main()
{
   char s[30] ; 
   ofstream file("file1.txt") ;
   file << "hello are you ready " ; 
   file.close() ;

   ifstream file1("file1.txt") ; 
   file1 >> s ; 
   cout << s;  

   file1.close() ;

}

*/



// Write a program to take name and cost of the item from the user and write into the file and again read from the file and display on the screen

#include <iostream>
#include <fstream>
using namespace std ;             

int main(){
    string name ;
    int cost ;
    cin >> name >> cost ;

    ofstream Obj("result.txt") ; 
    Obj << name << endl ;
    Obj << cost ;

    Obj.close() ; 

    ifstream non("result.txt") ; 
    non >> name ; 
    non >> cost ; 

    cout << name << endl << cost  ; 

    non.close(); 
}      


// we cannot use multiple obj to open files for read and write ,  for that cases we use open() function . 