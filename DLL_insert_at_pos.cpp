#include <bits/stdc++.h>
using namespace std ; 

class node{
    public :
    int data ;
    node *prev ;
    node *next ; 

    node(int d)
    {
        this->data = d ;
        this->prev = NULL ; 
        this->next = NULL ; 
    }
};

// traversing a linked list 

void print_list(node *head)
{
    node *temp = head; 
    
    while(temp != NULL)
    {
        cout << temp->data << " " ; 
        temp = temp->next ; 
    }
    cout << endl ; 
}


void insert_at_tail(node *&tail , int d)
{
    // new node created
    node *temp = new node(d) ;
    tail->next = temp ;
    temp->prev = tail ; 
    tail = temp ;  
}

void insert_at_head(node *&head , int d)
{
    node *temp = new node(d) ;
    temp->next = head ;
    head->prev = temp ; 
    head = temp ;  
}

void insert_at_position(node *&tail , node *&head , int pos , int d)
{
    // insert at Start
    if( pos == 1)
    {
        insert_at_head(head , d) ; 
        return ; 
    }

    node *temp = head ; 
    int count = 1  ;

    while(count < pos-1)
    {
        temp = temp->next ; 
        count++ ; 
    }

    // inserting at last position
    if(temp -> next == NULL)
    {
        insert_at_tail(tail,d) ; 
        return ;
    }

    // creating a node for d 
    node *nodeToInsert = new node(d) ; 

    nodeToInsert -> next = temp -> next ; 
    temp -> next -> prev = nodeToInsert ; 
    temp -> next = nodeToInsert ; 
    nodeToInsert -> prev = temp  ;
}

int main()
{
    node *node1 = new node(10) ; 
    node *head = node1 ;
    node *tail = node1 ; 

    print_list(head) ; 
  
    cout <<endl ; 
    insert_at_tail(tail , 11);
    print_list(head) ; 

    insert_at_tail(tail , 13)  ;
    print_list(head) ; 

    insert_at_tail(tail , 8) ; 
    print_list(head) ;

    insert_at_position(tail , head , 2 , 100) ; 
    print_list(head) ; 

    insert_at_position(tail , head , 1 , 101) ; 
    print_list(head) ; 

    insert_at_position(tail , head , 7 , 102 ) ; 
    print_list(head) ; 
    
     
    return 0 ;
}