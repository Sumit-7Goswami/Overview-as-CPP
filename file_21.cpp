//  Largest of three numbers ;

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x1, y1, z1;

    cout << "\n Enter three integers:";

    cin >> x1 >> y1 >> z1;

    ofstream obj1("input.txt");

    obj1 << x1 << " " << y1 << " " << z1;

    obj1.close();

    ifstream obj2("input.txt");

    obj2 >> x1; 
    obj2 >> y1;
    obj2 >> z1;

    obj2.close();

    ofstream obj3("output.txt");
    if (x1 > y1 && x1 > z1)
    {
        obj3 << x1;
    }
    else if (y1 > x1 && y1 > z1)
    {
        obj3 << y1;
    }
    else
    {
        obj3 << z1;
    }
    obj3.close();
}
