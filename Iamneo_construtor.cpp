// copy constructor

/*
#include <iostream>
using namespace std;
class rectangle{
  int length , breadth  ;

  public:
  rectangle(){}    // constructor

  rectangle(int l , int b){
    length = l ;
    breadth = b ;
  }
  rectangle(rectangle &r)
  {
    length = r.length ;
    breadth = r.breadth ;
  }

  void display(){
    cout << length <<" "<<breadth<<endl ;
  }

};

int main(){
    rectangle r1(10,20);   //object r1 is created and initialized
    rectangle r2(r1);   //copy constructor called
    rectangle r3=r1;   //copy constructor called again
    rectangle r4;         //r4 is created, not initialized
    r4=r1;         //copy constructor not called
    cout << "\n Length and breadth of r1:"; r1.display();
    cout << "\n Length and breadth of r2:"; r2.display();
    cout << "\n Length and breadth of r3:"; r3.display();
    cout << "\n Length and breadth of r4:"; r4.display();

  return 0;
}
*/

/*
#include <iostream>
using namespace std ;

class student
{
  int rno ;
  string name ;
  double fee ;

  public :
  student(int no , string n , double f)
  {
    rno = no ;
    name = n ;
    fee = f ;
  }

  student(student& t) // copy constructor
  {
    rno = t.rno ;
    name = t.name;
    fee = t.fee ;
  }

  void display(){
    cout << endl <<rno <<" "<<name <<" "<<fee ;
  }

};

int main(){
  int rno ;
  string name ;
  double fee ;
  cin >> rno ;
  cin >> name ;
  cin >> fee ;

  student s(rno ,name , fee) ;

  cout << "\nStudent details:" ;
  s.display() ;
  student ram(s);  // copy constructor called

  cout << "\nCopied student details: "  ;
  ram.display() ;
}
*/

/*
#include <iostream>
#include <string>
using namespace std ;

class GradeBook {
private:
    string courseName;
    string instructorName;

public:
    GradeBook() {
        // Default constructor
    }

    void setData(const string& course, const string& instructor) {
        courseName = course;
        instructorName = instructor;
    }

    void displayMessage() {
        cout << "Welcome to the grade book for " << courseName << "!" << endl;
        cout << "This course is presented by: " << instructorName << endl;
    }
};

int main() {
    string courseName, instructorName;

    // Input
    getline(cin, courseName);
    getline(cin, instructorName);

    // Create a GradeBook object
    GradeBook gradeBook;

    // Set data for the GradeBook
    gradeBook.setData(courseName, instructorName);

    // Display the message
    gradeBook.displayMessage();

    return 0;
}

*/
// i am providing two code below , one is wrong and another is correct ,check there is a small mistake from which our entire code will be wrong , evn=en our all cases passed

/*
#include <iostream>
using namespace std;

class Height {
private:
    int feet;
    double inches;

public:
    Height() {
        feet = 0;
        inches = 0.0;
    }

    void setHeight(int feet) {
        this->feet = feet;
        this->inches = 0.0;
    }

    void setHeight(double feet) {
        this->feet = int(feet);
        this->inches = (feet - int(feet)) * 12.0;
    }

    void setHeight(int feet, double inches) {
        this->feet = feet;
        this->inches = inches;
    }

    void show() {
        cout << "Feet=" << feet << " inches=" << inches << endl;
    }
};

int main() {
    Height h1, h2, h3;

    // Get the heights from the user
    int feet, inches;
    double feet_in_fraction;

    cin >> feet;
    cin >> feet_in_fraction;
    cin >> feet >> inches;

    // Set the heights of the instances
    h1.setHeight(feet);
    h2.setHeight(feet_in_fraction);
    h3.setHeight(feet, inches);

    // Display the heights of the instances
    h1.show();
    h2.show();
    h3.show();

    return 0;
}




*/

//      -----------------------------------------------------------------------
/*

#include <iostream>
using namespace std;

class Height {
private:
    int feet;
    double inches;

public:
    Height() {
        feet = 0;
        inches = 0.0;
    }

    void setHeight(int feet) {
        this->feet = feet;
        this->inches = 0.0;
    }

    void setHeight(double feet) {
        this->feet = int(feet);
        this->inches = (feet - int(feet)) * 12.0;
    }

    void setHeight(int feet, double inches) {
        this->feet = feet;
        this->inches = inches;
    }

    void show() {
        cout << "Feet=" << feet << " inches=" << inches << endl;
    }
};

int main() {
    Height h1, h2, h3;

    // Get the heights from the user
    int feet1;
    double feet_in_fraction;
    int feet2 , inches2 ;

    cin >> feet1;
    cin >> feet_in_fraction;
    cin >> feet2 >> inches2;

    // Set the heights of the instances
    h1.setHeight(feet1);
    h2.setHeight(feet_in_fraction);
    h3.setHeight(feet2, inches2);

    // Display the heights of the instances
    h1.show();
    h2.show();
    h3.show();

    return 0;
}



#include <iostream>

class MyClass {
public:
  int x;
  MyClass() : x(0) {
  }
  MyClass(const MyClass& other) 
  {
  x=other.x;
  }
};

int main() {
  MyClass obj1;
  obj1.x = 5;
  MyClass obj2 = obj1;
  obj2.x = 10;
  std::cout << obj1.x << " " << obj2.x << std::endl;
  return 0;
}


*/


/*
#include <iostream>
using namespace std;
class MyClass
{
  int x;

public:
  MyClass(int val) { x = val; }
  MyClass(const MyClass &obj) { x = obj.x + 10; }
  int getX() {
     return x; 
    }
};
int main()
{
  MyClass obj1(5);
  MyClass obj2 = obj1;
  cout << obj2.getX();
  return 0;
}

*/

/*
#include <iostream>
using namespace std;
class Shape
{
  string type;
  int sides;

public:
  Shape(string t = "Unknown", int s = 0)
  {
    type = t;
    sides = s;
  }
  void displayInfo() { cout << "Type: " << type << ", Sides: " << sides << endl; }
};
int main()
{
  Shape s1;
  s1.displayInfo();
  Shape s2("Triangle", 3);
  s2.displayInfo();
  return 0;
}

*/

/*
#include <iostream>
using namespace std;
class Point
{
  int x;

public:
  Point(int x)
  {
    this->x = x;
  }
  Point(const Point p)
  {
    x = p.x;
  }
  int getX() { return x; }
};
int main()
{
  Point p1(10);
  Point p2 = p1;
  cout << p2.getX();
  return 0;
}

*/

/*

#include <iostream>
using namespace std;
class LFC
{
public:
  LFC()
  {
    cout << "find";
  }
  ~LFC()
  {
    cout << "course";
  }
};
int main()
{
  LFC obj;
  return 0;
}


*/


/*
#include <iostream>
#include <string>
using namespace std ; 
class MyString
{
public:
  string str;
  MyString(const string &s) : str(s) {}
  MyString(const MyString &other) : str(other.str) {}
};
int main()
{
  MyString str1("Hello");
  MyString str2 = str1;
  cout << str1.str << endl;
  cout << str2.str << endl;
  return 0;
}



/*

#include <iostream>
#include <iomanip> // For setw function
using namespace std;

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Clock(int h , int m , int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void displayTime() {
        cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << endl;
    }

    // void setTime(int h, int m, int s) {
    //     hours = h;
    //     minutes = m;
    //     seconds = s;
    // }
};

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    Clock clock(h, m, s);
    clock.displayTime();

    return 0;
}

*/




// -------------------- OPERATOR OVERLOADING 

/*
#include <iostream>
using namespace std ;

class Number{
  private : 
  int x , y , z ; 

  public :
  Number(int n , int n1 , int n2)
  {
    x = n ; 
    y = n1 ; 
    z = n2 ; 
  }
  void operator-(){
    x = -x ; 
    y = -y ;
    z = -z ; 
  }

  void show_data()
  {
    cout << "\n x = " <<x << endl ; 
    cout << "\n y = " <<y << endl ; 
    cout << "\n z = " <<z << endl ; 
  }

};

int main(){
  Number N(7,8,9) ;
  N.show_data();

  // -N  indirect way of calling operator member fuction

  N.operator-() ;   // direct way of calling operator memeber function 

  N.show_data() ; 

}
*/


// #include <iostream>
// using namespace std ;

// class Number
// {
//   private : 
//   int x , y , z ; 

//   public :
//   Number(int n , int n1  , int n2)
//   {
//     x = n ; 
//     y = n1 ; 
//     z = n2 ; 

//     cout << "Before overloading: " ; 

//     cout << x << endl ; 
//     cout << y << endl ; 
//     cout << z << endl ; 
//   }

//   friend void operator-(Number) ; 

// };

// void operator-(Number obj)
// {
//   cout << "After overloading: " ; 
//   cout << -obj.x <<endl ; 
//   cout << -obj.y <<endl ; 
//   cout << -obj.z <<endl ; 

// }

// int main(){
//   Number N(7,8,9) ;
//   -N ; 
// }


// // write a program to overload unary prefix increment(++) and decrement(--) operator using member function of class
// #include <bits/stdc++.h>
// using namespace std ;


 

// write a program to overload unary postifx increment (++) and decrement (--) operator using member function of class

// write a program to find the sum of two complex number using friend function by overloading plus + operator .  


// write a program to find sum of two complrx numebrs using member function 


 
