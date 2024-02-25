/*

Problem Statement



You are developing a text editor application that allows users to manage a document. The application uses a linked list data structure to represent the document content. Each node of the linked list contains a string representing a line of text.



The application supports two operations: inserting new string values at the beginning of the document and appending a new string at the end of the document.



If no input string list is created and if no value is appended to the list, then an empty list should be returned as output.



Note: This is a sample question asked in a Capgemini interview.

Input format :
The first line of input consists of an integer, n representing the number of lines in the document.

The next n lines of input consist of the lines of text that constitute the document.

The last line of input consists of a string, s, which needs to be appended at the end of the document.

Output format :
The first line of output should print the initial document content, which inserts the given n values at the beginning.

The second line of output should print the final document content, which appends the given value s at the end of the document.



Refer to the sample output for formatting specifications.

Code constraints :
n>0

The length of each line should be less than or equal to 100 characters.

Sample test cases :
Input 1 :
3
Apple
Banana
Orange
Grapes

Output 1 :
Document: Orange Banana Apple
Updated Document: Orange Banana Apple Grapes

Input 2 :
2
Hello
World
Space
Output 2 :
Document: World Hello
Updated Document: World Hello Space
Input 3 :
0
Output 3 :
Document:
Updated Document: 



*/


#include <bits/stdc++.h>
using namespace std ;

class node{
    public :
    string data ;
    node *next ; 

    node(string data)
    {
        this->data=data ;
        this->next = NULL ; 
    }
}; 

void insert_beg(string str , node *&head)
{
    node *newnode = new node(str) ; 
    newnode->next = head ; 
    head = newnode ;   
}

void insert_end(string str , node *head)
{
    node *newnode = new node(str) ; 

    node *temp = head ; 

    while(temp->next != NULL)
    {
        temp = temp->next ; 
    }

    temp->next = newnode ; 

}

void print_list(node *head)
{
    while(head!=NULL)
    {
        cout<<" " << head->data ;
        head = head->next ;  
    }

}
int main()
{
    int n ;
    cin >> n ;
    string str ; 
    node *head = NULL ;
    node *temp = nullptr; 

    for(int i=0 ;i<n ; i++)
    {
        cin>>str ; 
        insert_beg(str , head) ; 
        // temp = head ; 
    }

    cout << "the list are: " <<endl ;
    print_list(head) ;

    cout <<endl ;  
    string new_str ; 
    cin >> new_str ; 
    insert_end(new_str , head) ; 

    cout <<"updated list: "<<endl ;
    print_list(head) ; 

}





//another method 
/*

#include <iostream>
using namespace std ;

class node{
    public :
    string data ; 
    node *next ; 

    node(string data)
    {
        this->data = data ; 
        next = NULL ; 
    }
};

void insert_at_beg(string str , node *&head)
{
    node * newnode = new node(str) ; 
    newnode->next = head ;
    head = newnode ;
}

void insert_at_end(string str , node *head)
{
    node *temp = head ; 

    while(temp->next!=NULL)
    {
        temp = temp->next ; 
    }
    node *newnode = new node(str) ; 
    temp->next = newnode ; 
}

void print_list(node *head)
{
    while(head!=NULL)
    {
        cout <<" "<< head->data << " " ;
        head = head->next ; 
    }
}

int main()
{
    int n ; 
    string word ; 
    cin >> n ; 

    node *head = nullptr ; 

    for(int i=0 ; i<n ; i++)
    {
        cin >> word ; 
        insert_at_beg(word , head) ;
    }
    cout << "Document: "  ; 
    print_list(head) ; 


    cin >> word ; 
    insert_at_end(word , head) ; 
    cout << "Updated documented: " ; 
    print_list(head) ;
}

*/