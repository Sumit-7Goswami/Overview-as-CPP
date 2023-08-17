#include <iostream>
using namespace std ; 

int main(){

    int n ; 
    cin >> n ;                              /*      3    2     1       */

    for(int i=0  ; i<n ; i++){

        for(int j=n ; j>=1 ; j--){

            cout <<  j << " " ; 
        }

        cout << endl  ; 
    }
    
    return 0 ; 
}