/*
Single File Programming Question
Problem Statement

You are working on a sales data management system. The sales data for each day is represented by two linked lists, where each node contains the sales values. Your task is to calculate the total sales by adding the sales values from the two linked lists and returning the result in a new linked list.



Note: This is the sample question asked in Amazon's recruitment

Input format :
The first line of input consists of an integer N, representing the number of nodes in the first linked list.

The second line consists of N space-separated integers, representing the sales values for each node in the first linked list.

The third line consists of an integer M, representing the number of nodes in the second linked list.

The fourth line consists of M space-separated integers, representing the sales values for each node in the second linked list.

Output format :
The first line of output prints the sales values of the first linked list, separated by space.

The second line of output prints the sales values of the second linked list, separated by space.

The third line prints the total sales, separated by space.



Refer to the sample output for formatting specifications.

Code constraints :
The size of the first linked list (N) and the size of the second linked list (M) are non-negative integers.

Sample test cases :

Input 1 :
2
4 5 
3
3 4 5

Output 1 :
First linked list: 4 5 
Second linked list: 3 4 5 
Total Sales: 3 9 0 

Input 2 :
2
6 3
1
7

Output 2 :
First linked list: 6 3 
Second linked list: 7 
Total Sales: 7 0 

Input 3 :
3
1 3 5
3
2 3 4

Output 3 :
First linked list: 1 3 5 
Second linked list: 2 3 4 
Total Sales: 3 6 9 

*/


#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_end(node*& head, node*& tail, int data) {
    node* newnode = new node(data);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = tail->next;
    }
}

void reverseList(node*& head) {
    node* prev = NULL;
    node* current = head;
    node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;       
        current = next;     
    }
    head = prev; // Update the head to point to the new start of the reversed list
}

node* addTwoLists(node* first, node*& second) {
    node* res = NULL;
    node* prev = NULL;
    node* temp = NULL;
    int carry = 0, sum;

    while (first != NULL || second != NULL) {
        sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
        carry = sum / 10;
        sum = sum % 10;
        temp = new node(sum);
        if (res == NULL)
            res = temp;
        else
        {
            prev->next = temp;
        }

        prev = temp;
        
        if (first)
            first = first->next;
        if (second)
            second = second->next;
    }

    if (carry > 0)
        temp->next = new node(carry);

    reverseList(res);
    return res;
}

void displayList(node* head) {
    if (head == NULL) {
        cout << "Empty List!";
        return;
    }
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteList(node* head) {
    node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int N, M;
    cin >> N;
    node* first = NULL;
    node* tail1 = NULL;

    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        insert_at_end(first, tail1, value);
    }

    cin >> M;
    node* second = NULL;
    node* tail2 = NULL;

    for (int i = 0; i < M; i++) {
        int value;
        cin >> value;
        insert_at_end(second, tail2, value);
    }

    cout << "First linked list: ";
    displayList(first);
    cout << "Second linked list: ";
    displayList(second);

    // Reverse the linked lists to perform addition
    reverseList(first);
    reverseList(second);

    node* result = addTwoLists(first, second);

    cout << "Total Sales: ";
    displayList(result);

    // Delete the linked lists
    deleteList(first);
    deleteList(second);
    deleteList(result);

    return 0;
}






  