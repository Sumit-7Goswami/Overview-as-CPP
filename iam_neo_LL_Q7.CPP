/*
Problem Statement



You are developing a smart device that reads binary data from sensors installed in various locations. Each sensor generates a stream of binary data, and the binary values are stored in a linked list. Your task is to implement a function that calculates the decimal value of the binary data represented by the linked list.



The linked list represents the binary representation of a number, with the most significant bit at the head of the linked list. Your function should traverse the linked list and calculate the decimal value of the binary number. 



Note: This is a sample question asked in the Google interview.

Input format :
The input consists of a singly-linked list representing the binary data.

Each node in the linked list contains a value of either 0 or 1.

Output format :
The output is the decimal value calculated from the binary data represented by the linked list.

Code constraints :
The number of nodes will not exceed 30.

Each node's value is either 0 or 1.

The binary data is guaranteed to be a valid representation of a non-negative integer.

The most significant bit is located at the head of the linked list.

Sample test cases :
Input 1 :
3
1 0 1
Output 1 :
Linked List: 1 0 1 
Decimal Value: 5
Input 2 :
0
Output 2 :
Linked List: Empty linked list
Decimal Value: 0
*/


 



#include <bits/stdc++.h>
using namespace std ;

class node{
    public :
    int data ;
    node *next ;

    node(int data)
    {
        this->data = data ;
        this->next = NULL ; 
    }
};

void insert_at_end(node *&head ,node *&tail ,  int value)
{
    // create a node
    node *newnode = new node(value) ; 

    if(head==NULL)
    {
        head = newnode ; 
        tail = newnode ; 
    }
    else
    {
        tail->next = newnode ;
        tail = tail->next ;
    }
}


int decimal_value(node *head) {

    // Reversing the linked list

    node *prev = NULL ;
    node *curr = head ;
    node *next = NULL ;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev; // Setting the new head after reversal

    int decimal = 0;
    int i = 0;

    while (head) {
        decimal += pow(2, i) * head->data;
        i++;
        head = head->next;
    }

    return decimal;
}




void display(node *head) {
    if (head == NULL) {
        cout << "Empty linked list";
        return;
    }
    
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int n , value; 
    node *head = NULL ;
    node *tail = NULL ;
    cin >> n ; 

    for(int i=0 ; i<n ; i++)
    {
        cin >> value ;
        insert_at_end(head ,tail, value) ;
    }

    display(head);

    int result = decimal_value(head)  ;
    cout <<endl << result ; 
}





/*

int getDecimalValue(ListNode* head , int len) {
    int decimalValue = 0;
    while (head) {
        decimalValue += (head->val) * pow(2,len-1) ; 
        head = head->next;
        len-- ;
    }
    return decimalValue;
}

*/





/*
#include<iostream> 
using namespace std; 

class node{
    public :
    int data ;
    node *next ;

    node(int data)
    {
        this->data = data ; 
        next = nullptr ; 
    }
};

void insert_at_end(node *&head , int data)
{
    node *newnode = new node(data) ;
    
    if(head==NULL)
    {
        head = newnode ; 
    }
    else
    {
        node *temp = head ;

        while(temp->next != NULL)
        {
            temp = temp->next ; 
        }
        temp->next = newnode ; 

    }
}
int getDecimalValue(node *head )
{
    int decimal = 0 ;
    while(head)
    {
        decimal = decimal * 2 + head->data ;
        head = head->next ; 
    } 
    return decimal ;
}


void display(node *head)
{
    while(head != NULL)
    {
        cout << head->data <<" " ; 
        head = head->next ; 
    }
}

int main()
{
    int n , element; 
    cin >> n ; 
    node *head=NULL ;  

    for(int i=0 ; i<n ; i++){
        cin >> element ; 
        insert_at_end(head , element) ; 
    }

    display(head) ;
      int decimal_value = getDecimalValue(head) ; 
    cout << "the decimal value is : " ; 
    cout << decimal_value ; 
}

  

*/