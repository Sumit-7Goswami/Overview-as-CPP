/*
You are working as a programmer in a school, and your task is to create a program that manages student records using a linked list. Each node in the linked list represents a student record with the following fields:



data: An integer representing the student's roll number.

next: A pointer to the next student record in the linked list.

Your program should have the following functionalities:



Adding Student Records: The program should allow the user to enter integer values (student roll numbers) one by one to create a linked list of student records. The input process should continue until the user enters -1, indicating that no more students need to be added.



Printing Student Records: After the user finishes adding student records, the program should print the linked list elements (i.e., the roll numbers of all students) in the order they were entered.



Cleaning up Memory: It's essential to manage memory properly to avoid memory leaks. After printing the student records, the program should clean up the memory occupied by the linked list nodes to ensure efficient memory usage.



Your task is to implement the program following the provided code template and ensure that it meets the specified requirements. Test the program by adding student records and verifying that the printing and memory cleanup work correctly.

Input format :
First line of the input consists of list of elements. Enter -1 to stop the input.

Output format :
The output displays the list elements.

Code constraints :
numbers > 0

Sample test cases :
Input 1 :
98 78 67 65 54 -1
Output 1 :
98 78 67 65 54 

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

void insert_last(node *&head , int data)
{
    node *newnode = new node(data) ;
    
    if(head==NULL)
    {
        head = newnode ; 
    }
    else
    {
        node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next ; 
        }
        temp->next = newnode ; 
    }
}

void print(node *head)
{
    while(head != NULL)
    {
        cout << head->data <<" ";
        head = head->next ;
    }
}

void deleteList(node*& head) {
    while (head != NULL) {
        node* temp = head;
        head = head->next;
        delete temp;
    }
}


int main()
{
    node *head = NULL ;
    int n=0;
    
    while(n != -1)
    {
        cin >> n ; 
        
        if(n != -1){
        insert_last( head , n )  ;
        }
    }
    
    print(head) ; 
    
    deleteList(head) ; 
}