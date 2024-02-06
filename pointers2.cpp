/* seema is learning void pointers and their application . Help her to write a program that takes an integer and a character . The program should check the following  : 

If the integer is positive , negative , or zero . 
If the character is an alphabet , number , or not .
Display appropriate messgae , for everything 

*/

#include <iostream>
using namespace std ; 

int main(){
    int num ; 
    char chr ; 
    cin >> num ;
    cin >> chr ; 

    void* numPtr = &num ; 

    if(*(int*)numPtr > 0){
        cout <<"number is posituve" <<endl ; 
    }
    else if(*(int*)numPtr < 0){
        cout <<"The number is negative " <<endl ; 
    }
    else{
        cout <<"The number is zero" << endl ; 
    }

    void* charPtr = &chr  ; 

    if(isdigit(*(char*)charPtr)){
        cout << "The character is A numbr "  <<endl ;  
    }

    else if(isalpha(*(char*)charPtr)){
         cout << "the character is an alphabet ."   ;
    }
    else{
        cout << "The character is not a number or not a alphabet " ; 
    }
}