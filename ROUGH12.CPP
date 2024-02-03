#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int arr[100] ;
    int size ; 
    cin >> size ; 
    for(int i=0 ; i<size ;i++){
        cin >> arr[i] ; 
    }
    int num ; 
    cin >> num ; 
    
    for(int i=0 ; i<size ; i++){
        if(num==arr[i]){
            cout << "The target value "<<num <<" is present in the array." <<endl ;
        }
        else{
            cout << "The target value "<<num <<" is not present in the array." <<endl ; 
        }
    }
    
}
