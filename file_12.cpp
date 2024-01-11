

// #include <fstream>
// #include <iostream>
// using namespace std;
// int main()
// {
//     ifstream in;
//     in.open("data");
//     cout << in.tellg() << endl;
//     in.seekg(2, ios::beg);
//     cout << in.tellg() << endl;
//     in.seekg(2, ios::cur);
//     cout << in.tellg() << endl;
//     in.seekg(-2, ios::end);
//     cout << in.tellg() << endl;
//     string line;
//     getline(in, line);
//     cout << line;
// }





#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("sample.txt");
    fout << "India is our country";
    cout << fout.tellp() << endl;
    fout << "He is Ram";
    cout << fout.tellp() << endl;
    fout.seekp(5, ios::beg);
    fout << "he is going to market";
    cout << fout.tellp();
    fout.close();
}
