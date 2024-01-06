// Ragul wants to write a program to calculate the sum of a series of numbers and store them in a file. He wants to take input from the user for the number of elements in the series and the values of each element. Calculate the sum of the numbers and store them in a file named "sample.txt".

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
     
    ofstream outdata;
    int i,n,sum=0;
    cin>>n;

    int num[n];

    for (i=0; i<n; ++i)
        cin>>num[i];

    for(i=0;i<n;i++)
       sum=sum+num[i];

    cout<<sum;

    outdata.open("sample.txt");
    for (i=0; i<n; ++i)
       outdata << num[i] << endl;
       outdata << sum ; 
   outdata.close();

   return 0;
}

