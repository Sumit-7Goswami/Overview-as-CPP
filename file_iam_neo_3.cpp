/*
Ishu wants to set up a program that creates a file named "numbers.txt" and fills it with numbers from 1 to N, where N is a positive integer provided as input. After setting up the file, Ishu wants to read the numbers from the file and display them on the console. Help ishu to write the program.



Note: This is a sample question asked in an Infosys interview.

Input format :
The input consists of a single integer, N, representing the maximum number to be written to the file.

Output format :
The program reads the numbers from the file "numbers.txt" and outputs each number on a separate space.

Code constraints :
1 <= N <= 2000

The input integer N represents the number of elements in the sequence.

The file manipulation operations are performed using the file named "numbers.txt".

The file "numbers.txt" is truncated (emptied) after the setup process.

The program will handle file errors such as failure to open or close the file.

The output format should exactly match the provided samples.

Sample test cases :
Input 1 :
10
Output 1 :
1 2 3 4 5 6 7 8 9 10 

*/

#include <iostream>
#include <fstream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ;
    
    ofstream obj("numbers.txt");
    
    for(int i=1 ; i<=n ;i++ ){
        obj << i <<endl ; 
    }
    
    obj.close() ; 
    
    ifstream obj1("numbers.txt");
    
    
    while(obj1 >> n)
    {
        cout << n <<endl ; 
    }
    
   obj1.close() ;
   
   return 0 ; 
}