/*
write a program that allows the user to input a set of numbers, stores them in an array, and then writes the numbers to a file named "sample.txt". Additionally, the program should find the maximum and minimum values from the input numbers and display them on the console.
*/

#include <iostream>
#include <fstream>
using namespace std ; 

int main(){

    ofstream obj ;

    int n ;
    cin >> n ;

    int number[n] ; 

    for(int i=0 ; i<n ; i++){
        cin >> number[i] ; 
    }

    obj.open("result.txt") ; 
    for(int i=0 ; i<n ; i++){
        obj << number[i] <<endl; 
    }

    obj.close() ; 

    int max = number[0] ;
    int min = number[0] ; 

    for(int i=1 ; i<n ; i++){
        if(number[i]>max){
            max = number[i] ; 
        }
        if(number[i]<min){
            min = number[i] ; 
        }
    }
    cout << max <<" "<<min ; 

}
