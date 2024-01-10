// #include <iostream>
// #include <fstream>
// using namespace std;
// int main ()
// {
//    ofstream fs;
//    fs.open ("test.txt");
//    fs <<"hello";
//    cout<<"is stream good: "<<fs.bad();
//    fs.close();
// }





// #include <iostream>
// #include <fstream>
// using namespace std;
// int main ()
// {
//    ofstream fs;
//    fs.open ("test.txt");
//    fs <<"hello";
//    cout<<"is stream good: "<<fs.fail();
//    fs.close();
// }





#include <iostream>
#include <fstream>
using namespace std;
int main () 
{
   ofstream fs;
   fs.open ("test.txt");
   fs <<"hello";
   cout<<"is stream good: "<<fs.good();
   fs.close();
}
