/*
Suresh wants to create a program that allows him to create a linked list of integers. Suresh should enter the number of elements he wants to add to the linked list. Then, he should enter each element one by one and add them to the linked list. Finally, display the contents of the linked list. Suresh should note that the code handles an empty list case and prints a message if the list is empty.



Note: This is a sample question asked in an Accenture interview.

Input format :
The first line of input contains an integer numElements, representing the number of elements to be added to the linked list.

The next numElements lines contain an integer each, representing the elements to be added to the linked list.

Output format :
The output displays the elements of the linked list, separated by a space.

If the linked list is empty, the program will output "The list is empty."



Refer to the sample output for formatting specifications.

Code constraints :
1<=numElements<=20

Sample test cases :
Input 1 :
4
7 8 6 4
Output 1 :
7 8 6 4 
Input 2 :
0
Output 2 :
The list is empty.
*/

/*
*/

#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = NULL;
    }
};

void insert(int value, node*& head) {
    node* newnode = new node(value);
    if (head == NULL) {
        head = newnode;
    }
    else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

int main() {
    int num;
    cin >> num;
    int element;
    node* head = NULL;

    for (int i = 0; i < num; i++){
        cin >> element;
        insert(element, head);
    }

    // Print the linked list
    // node* temp = head;
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;

    // Clean up the allocated memory
    while (head != NULL) {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    cout << "all memory are deleted" ; 
    
    
    cout << "again trying to print ; " ; 
   
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}
