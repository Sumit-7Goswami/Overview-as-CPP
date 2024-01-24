/*
Meena likes to save the quotes from the books she reads. Help her by writing a program to save those quotes to a file called "quotes.txt". Your program should contain the following:



The goal of this program is to read quotes from the user and store them in a file. Later, it retrieves the quotes from the file and displays them on the console. The user can enter multiple quotes until they input a dot (.) to indicate the end of quotes.



Note: This is a sample question asked in a HCL interview.

Input format :
The input consists of the quotes as input, each on a separate line.

The quotes should be terminated by entering a dot (.) on a new line.

Output format :
The output displays Create a file named "quotes.txt" and store the entered quotes in it.

Then, it will read the quotes from the file and display them on the console.



Refer to the sample output for format specifications.

Code constraints :
The maximum length of each quote is limited by the available memory.

The total number of quotes is not restricted.

Sample test cases :
Input 1 :
I solemnly swear that I am up to no good
Happiness can be found, even in the darkest of times, if one only remembers to turn on the light
Mischief Managed
What you fear most of all is —fear
.
Output 1 :
I solemnly swear that I am up to no good
Happiness can be found, even in the darkest of times, if one only remembers to turn on the light
Mischief Managed
What you fear most of all is —fear
*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std; 


int main() {
    ofstream obj("quotes.txt"); // Open the file for writing

    if (!obj.is_open()) {
        cout << "Unable to open quotes.txt for writing." << endl;
        return 1;
    }

    // std::cout << "Enter quotes (terminate with a dot):" << std::endl;

    string quote;
    while (true) {
        getline(cin, quote);
        if (quote == ".") {
            break; // Exit the loop when a dot is entered
        }
        obj << quote << endl;
    }

    obj.close(); // Close the file

    // Reopen the file for reading and display the quotes
    ifstream obj1("quotes.txt");
    if (!obj1.is_open()) {
        cout << "Unable to open quotes.txt for reading." << endl;
        return 1;
    }

    // std::cout << "\nQuotes from the file:" << std::endl;

    while (getline(obj1, quote)) {
        cout << quote << endl;
    }

    obj1.close(); // Close the file

    return 0;
}
