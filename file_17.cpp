/*

write(): The write() function is used to write object or record (sequence of bytes) to the file. A record may be an array, structure or class.


The read() function is used to read object (sequence of bytes) from the file.


*/

#include <iostream>
#include <fstream> 
using namespace std ;

int main()
{
    int marks[] = {98,67,89,100,65,51,78,12,43};
    int arr[10] = {0} ; 

    fstream obj ; 

    obj.open("temp.txt" ,ios::out | ios::binary);

    obj.write((char*)marks , sizeof(marks)) ; 
    obj.close() ; 

    obj.open("temp.txt" ,ios::in | ios::binary); 

    obj.read((char*)arr , sizeof(arr)) ; 

    cout <<"\n Marks obtained : " ; 

    for(int i=0 ; i<10 ; i++){
        cout << "\t" << arr[i] ; 
    }

    obj.close() ;

}