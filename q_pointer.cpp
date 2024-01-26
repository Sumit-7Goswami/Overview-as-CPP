//           I love eating pizza and drinking soda on weekends
//          Output 1 : 24

// #include <iostream>
// #include <cctype>
// using namespace std ; 

// int main() {
    
//     char input[1000];

//     cout << "Enter a paragraph: ";
//     cin.getline(input , 1000 );

//     char* ptr = input;
//     int totalConsonants = 0;

//     while (*ptr) {
//         char c = tolower(*ptr);

//         if (isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
//             totalConsonants++;
//         }

//         ptr++;
//     }

//     cout << "Total consonants: " << totalConsonants << endl;

//     return 0;
// }




// #include <iostream>
// using namespace std ; 

// int main(){

//     char input[1000] ; 

//     cin.getline(input , 1000) ; 

//     char *ptr = input ; 

//     char **pt = NULL  ;

//     int total_con = 0 ; 

//     while(*ptr){

//         char c = tolower(*ptr) ; 

//         if(isalpha(c) && c!='a' && c!='e' && c!='i' && c!='o' && c!='u'){
            
//             total_con++ ; 

//         }
//         ptr++ ; 

//     }

//     cout << total_con ; 

//     return 0 ; 
// }




// use  of double pointer to access 

// #include <bits/stdc++.h>
// using namespace std ; 

// int main() {
//     const int MAX_PARAGRAPHS = 1; // Maximum number of paragraphs
//     const int MAX_LENGTH = 1000;   // Maximum length of each paragraph

//     char** paragraphs = new char*[MAX_PARAGRAPHS]  ;

//     cout << "Enter paragraphs (enter an empty line to finish):\n";

//     int paragraphCount = 0;
//     char input[MAX_LENGTH];

//     while (paragraphCount < MAX_PARAGRAPHS) {
//         cout << "Paragraph " << paragraphCount + 1 << ": ";
//         cin.getline(input, MAX_LENGTH);

//         // Check for an empty line to finish input
//         if (input[0] == '\0') {
//             break;
//         }

//         // Allocate memory for the paragraph and copy the input
//         paragraphs[paragraphCount] = new char[strlen(input) + 1];
//         strcpy(paragraphs[paragraphCount], input);
//         paragraphCount++;
//     }

//     int totalConsonants = 0;

//     for (int i = 0; i < paragraphCount; i++) {
//         char* ptr = paragraphs[i];

//         while (*ptr) {
//             char c = tolower(*ptr);

//             if (isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
//                 totalConsonants++;
//             }

//             ptr++;
//         }

//         // Clean up memory for each paragraph
//         delete[] paragraphs[i];
//     }

//     // Clean up memory for the array of paragraphs
//     delete[] paragraphs;

//     cout << "Total consonants: " << totalConsonants << std::endl;

//     return 0;
// }



// #include <iostream>
// using namespace std ; 

// int main(){
//     char para[1000]  ; 
//     cin.getline(para , 1000) ; 
    
//     char* ptr = para   ;
//     char** ppt = NULL ; 
//     int count = 0 ;
    
//     while(*ptr){
//         char c = tolower(*ptr) ;  
        
//         if(isalpha(c) && c!='a' && c!='e' && c!='i' && c!='o' && c!='u'){
//             count++ ;
//         }
//         ptr++ ; 
//     }
    
//         cout << count ; 
    
//     return 0 ; 
// } 


// #include <iostream>
// using namespace std ; 

// int main(){

//     char input[1000] ; 

//     cin.getline(input , 1000) ; 

//     char *ptr = input ; 

//     char **pt = NULL  ;

//     int total_con = 0 ; 

//     while(*ptr){

//         char c = tolower(*ptr) ; 

//         if(isalpha(c) && c!='a' && c!='e' && c!='i' && c!='o' && c!='u'){
            
//             total_con++ ; 

//         }
//         ptr++ ; 

//     }

//     cout << total_con ; 

//     return 0 ; 
// }

/*
#include <iostream>
#include <algorithm>
using namespace std;

void findFrequency(int* arr, int size) {
    // Sort the array to group identical elements together
    sort(arr, arr + size);

    // Initialize variables to track the current element and its count
    int current_element = arr[0];
    int count = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == current_element) {
            // If the current element is the same as the previous one, increment the count
            count++;
        } else {
            // Print the frequency of the previous element with proper pluralization
            cout << current_element << " - " << count << " time" << (count > 1 ? "s" : "") << endl;

            // Update the current element and reset the count
            current_element = arr[i];
            count = 1;
        }
    }

    // Print the frequency of the last element in the array with proper pluralization
    cout << current_element << " - " << count << " time" << (count > 1 ? "s" : "") << endl;
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findFrequency(arr, size);

    return 0;
}









#include <iostream>
#include <algorithm>
using namespace std;

void findFrequency(int* arr, int size) {
    // Sort the array to group identical elements together
    sort(arr, arr + size);

    int* current_ptr = arr;
    int* next_ptr = arr + 1;
    int count = 1;

    while (next_ptr != arr + size) {
        if (*current_ptr == *next_ptr) {
            // If the current element is the same as the next one, increment the count
            count++;
        } else {
            // Print the frequency of the previous element with proper pluralization
            cout << *current_ptr << " - " << count << " time" << (count > 1 ? "s" : "") << endl;

            // Move the pointers
            current_ptr = next_ptr;
            count = 1;
        }
        next_ptr++;
    }

    // Print the frequency of the last element in the array with proper pluralization
    cout << *current_ptr << " - " << count << " time" << (count > 1 ? "s" : "") << endl;
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findFrequency(arr, size);

    return 0;
}



*/




/*
#include <iostream>
using namespace std;

int calculateEvenProduct(int* arr, int size) {
    int* ptr = arr;
    int count = 1;

    for (int i = 0; i < size; i++) {
        if (*ptr % 2 == 0) {
            count *= *ptr;
        }
        ptr++;
    }

    if (count != 1) {
        cout << "Product of even elements: " << count << endl;
    } else {
        cout << "Invalid input " << endl;
    }
}

int main() {
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    calculateEvenProduct(arr, size);
}
*/


// #include <iostream>
// using namespace std ; 

// class Kota{
//     public : 

//     int x=5  ;

// }; 

// int main(){

//     Kota obj ;
//     Kota *ptr ; 
//     ptr = &obj ; 
//     cout << obj.x ; 
//     cout << ptr->x ; 

// }

/*

#include <iostream>
using namespace std ; 

int main(){

    int x , *y ; 
    y = &x ; 
    x = 10 ; 
    cout << ++(*y) ;

    return 0 ;
}

*/



/*
#include<iostream>
using namespace std;
class Test
{
    private:    
    int x;    
    public:  
      Test(){x = 0;}   
       void destroy() { delete this; }
       void print() 
       { 
        cout << "x = " << x; }
       };
       int main()
       { 
        Test obj; 
        obj.destroy();   
        obj.print();    
        return 0;
        }


*/

/*
#include <iostream>
using namespace std ; 

int main(){

    int n = 4 ;
    int *ptr = &n ; 
    int * *ptr1 = &ptr ; 

    cout << * *ptr1 ; 
    return 0 ; 
}

 


#include <iostream>
using namespace std ; 

int main(){

    int *ptr ; 

    ptr = new int ; 

    delete ptr ; 

    *ptr = 5 ;

    cout << *ptr ; 

    return 0 ; 

}
 



*/


// add 2 numbers in use of dangling pointer 


/*
#include <iostream>
using namespace std;

int* performArithmetic(int num1, int num2) {
    int* result = new int(num1 + num2);
    return result;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int* arithmeticResult = performArithmetic(num1, num2);

    // Print the arithmetic result
    cout << "Result: " << *arithmeticResult << endl;

    // Delete the memory allocated for arithmeticResult (simulating the bug)
    delete arithmeticResult;

    // Attempt to access the dangling pointer
    cout << "Error: Dangling pointer detected!" << endl;

    return 0;
}







#include <bits/stdc++.h>
using namespace std;

struct bank {
    long acc_1;
    int bal_1;

    long acc_2;
    int bal_2;

    int depo_1;
    int withdraw_2;

    int update_acc1(long acc_1, int bal_1, int depo_1) {
        bal_1 = bal_1 + depo_1;
        this->bal_1 = bal_1;
        cout << bal_1 << endl;
        return bal_1; // Return the updated balance
    }

    int update_acc2(long acc_2, int bal_2, int withdraw_2) {
        this->bal_2 = bal_2;
        this->withdraw_2 = withdraw_2;
        if (bal_2 > withdraw_2) {
            bal_2 = bal_2 - withdraw_2;
            cout << bal_2;
        } else {
            cout << bal_2;
        }
        return bal_2; // Return the updated balance
    }
};

int main() {
    bank b;

    cin >> b.acc_1 >> b.bal_1 >> b.acc_2 >> b.bal_2 >> b.depo_1 >> b.withdraw_2;

    if (b.withdraw_2 > b.bal_2) {
        cout << "Insufficient balance in account " << b.acc_2 << endl;
    }
    int value_1 = b.update_acc1(b.acc_1, b.bal_1, b.depo_1);
    int value_2 = b.update_acc2(b.acc_2, b.bal_2, b.withdraw_2);

    cout << "Account " << b.acc_1 << " has a balance of: " << value_1 << endl;
    cout << "Account " << b.acc_2 << " has a balance of: " << value_2 << endl;

    return 0;
}








#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student {
public:
    string name;
    int numSubjects;
    double marks[10];

    Student() : numSubjects(0) {
        // Initialize numSubjects to 0 in the constructor
    }

    void calculateAverageMarks() {
        double totalMarks = 0.0;
        for (int i = 0; i < numSubjects; i++) {
            totalMarks += marks[i];
        }
        double averageMarks = totalMarks / numSubjects;
        cout << "Name: " << name << endl;
        cout << fixed << setprecision(2) << "Average marks: " << averageMarks << endl;
    }
};

int main() {
    int numStudents;
    cin >> numStudents;

    Student students[100]; // Assuming up to 100 students

    for (int i = 0; i < numStudents; i++) {
        cin.ignore(); // Clear the newline character from the previous input
        getline(cin, students[i].name);
        cin >> students[i].numSubjects;
        for (int j = 0; j < students[i].numSubjects; j++) {
            cin >> students[i].marks[j];
        }
    }

        cout << "Student Details:" << endl;
    for (int i = 0; i < numStudents; i++) {
        students[i].calculateAverageMarks();
    }

    return 0;
}






#include <iostream>
using namespace std;

void printLength(const char* str) {
    str == nullptr ; 
    cout << "Length of the string: 0" << endl;
    
    int length = 0;
    while (str[length] != '\0') {
        length++ ;
    }
    cout << "Length of the string: " << length << endl;
    
}

int main() {
    char str[51];  // Note: Increase the size by 1 to accommodate the null-terminator
    cin.getline(str, 51);

    printLength(str);

    return 0;
}





#include <bits/stdc++.h>
using namespace std ;

class FitnessData{
  public:
  
  string name ;
  double weight ; 
  
};

int main(){

    string name ; 
    double initial_weight , updated_weight ; 
    
    cin >> name >> initial_weight >> updated_weight ; 
    
    FitnessData obj ;
    
    obj.name = name ; 
    obj.weight = initial_weight ; 
    
    double FitnessData::*weightPtr = &FitnessData::weight ; 
    obj.*weightPtr = updated_weight ; 
    
    cout << "Updated fitness information:"<<endl ;
    cout <<"Name: " <<obj.name <<endl ;
    cout <<"Weight: "<<obj.*weightPtr ; 
}





#include <bits/stdc++.h>
using namespace std ; 


int main(){
    int n;
    cin >>n ;

    string name[n] ; 
    int attent[n] ; 
    
    for(int i=0 ; i<n ; i++){
        cin >> name[i] >>attent[i] ;
    }
    
    cout <<"Attendance Report:"<<endl ;
    string result ; 
    for(int i=0 ; i<n ;i++){

        if(attent[i]==1){
            result = "Present" ;  
        }
        else{
            result = "Absent" ; 
        }
        cout << name[i]<<" "<<result <<endl ;
    }
}











#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, col;

    cin >> row >> col;

    int mat[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }

    int row1, row2;
    cin >> row1 >> row2;

    if (row1 >= 0 && row1 < row && row2 >= 0 && row2 < row) {
        for (int j = 0; j < col; j++) {
            int temp = mat[row1-1][j];
            mat[row1-1][j] = mat[row2-1][j];
            mat[row2-1][j] = temp;
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Invalid row numbers";
    }

    return 0;
}

*/