/*

Problem Statement

Your task is to write a program that takes input for the number of elements in the linked list and the corresponding string values for each element. Based on this input, your program should create a linked list and then delete the alternate nodes from it.



Note: This is a sample question asked in a HCL interview.

Input format :
The first line contains an integer n, the number of elements in the linked list.

The second line contains n space-separated strings representing the elements of the linked list.

Output format :
If the linked list is empty, output "List is empty".

If the linked list is not empty, output the following:

The first line should display the elements of the original linked list, separated by a space.

The second line should display the elements of the linked list after deleting the alternate nodes, separated by a space.



Refer to the sample output for formatting specifications.

Code constraints :
0 ≤ n ≤ 100

Each string in the input is non-empty and consists of alphanumeric characters (letters and digits) only.

The total length of all strings combined does not exceed 10^2 characters.

Sample test cases :

Input 1 :
2
Apple Banana

Output 1 :
Linked list data: Apple Banana 
After deleting alternate node:Apple 

Input 2 :
5
Red Green Blue Yellow Orange

Output 2 :
Linked list data: Red Green Blue Yellow Orange 
After deleting alternate node:Red Blue Orange 

Input 3 :
0

Output 3 :
List is empty



*/

#include <iostream>
using namespace std ; 
#include <string>

struct Node {
    string data;
    Node* next;

    Node(const string& value) : data(value), next(nullptr) {}
};

void insertNode(Node*& head, Node*& tail, const string& value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteAlternateNodes(Node*& head) {
    Node* current = head;
    while (current && current->next) {
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
        current = current->next;
    }
}

void printLinkedList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; ++i) {
        string value;
        cin >> value;
        insertNode(head, tail, value);
    }

    cout << "Linked list data: ";
    printLinkedList(head);

    deleteAlternateNodes(head);

    if(head){
        cout << "After deleting alternate node: ";
        printLinkedList(head);
    } else {
        cout << "List is empty" << endl ;
    }

    // Clean up memory by deleting nodes
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}



