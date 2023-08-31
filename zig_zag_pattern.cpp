/*

|    *       *
|  *   *   *   *
|*       *       *

from abobe diagram we conclude some points ;
see here row ---> 1 to 3 

if (i+j)%4==0 . then print star and 

column  --> R=2  &  C%4=0  , then also print star



*/

#include <iostream> 
using namespace std ; 
int main(){

    int n ; 
    cin >> n ; 

    for(int i=1 ; i<=3 ; i++){

        for(int j=1 ;j<=n ;j++){
            if((i+j)%4==0  || (i==2 && j%4==0)){
                cout <<"* " ; 
            }
            else{
                cout <<"  " ;
            }

        }
        cout << endl ; 
    }

    return  0 ; 
}