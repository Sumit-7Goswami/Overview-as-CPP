/*
Problem Statement



Imagine you are a cashier working at a grocery store. As customers come to your register, you scan each item and add it to a linked list to keep track of the purchases. Each node in the linked list represents an item, and it contains the price of the item and a reference to the next item.



At the end of the day, you need to calculate the sum of the prices of the last m items sold. This information is important for inventory management and financial reporting purposes. By knowing the sum of the last m items, you can keep track of the total revenue generated and ensure accurate stock management.



Given a linked list and a number m. Find the sum of the last m nodes of the linked list.



Note: This question is asked in Adobe.

Input format :
The first line of input consists of the size n.

The second line of input consists of n elements, separated by space.

The third line of input consists of the value of m.

Output format :
The output prints the sum of the last m nodes of the given linked list.

Code constraints :
0 < n <=100

0 < m <= 100

Sample test cases :
Input 1 :
6
3 1 0 4 30 12
3
Output 1 :
46
Input 2 :
10
7 4 1 2 5 8 0 3 6 9
5
Output 2 :
26
*/


#include <iostream>
using namespace std  ;

class node
{
    public :
    int data ;
    node *next ; 

    node(int data)
    {
        this->data = data ; 
        this->next = NULL ;
    }
};

void insert_at_end(node *&head , node *&tail , int data)
{
    node *newnode = new node(data) ;

    if(head==NULL)
    {
        head = newnode ;
        tail = newnode ;
    }

    else{
        tail->next = newnode ; 
        tail = tail->next ; 
    }
}

int get_LL_size(node *head)
{
    int count = 0 ;

    while(head != NULL)
    {
        count++ ; 
        head = head->next ;
    }

    return count ;
}

void display(node *head)
{
    node *temp = head ;
    while(temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next ;

    }
}

int sum_of_last_node(node *head , int n)
{
    int size = get_LL_size(head) ; 

    if(n<=0 || n>size )
    {
        return 0 ;
    }
    else
    {
        node *curr = head ; 

        for(int i=0 ; i<size-n ; i++)
        {
            curr = curr->next ; 
        }

        int sum = 0;

        while(curr != NULL)
        {
            sum += curr->data ;
            curr = curr->next ; 
        }

        return sum ; 

    }
}
int main()
{
    node *head  = NULL ;
    node *tail = NULL ; 

    int n  ;
    cout << "enter the number of element in your node : ";
    cin >> n ;
    
    int num ; 
    for(int i=0 ; i<n ; i++)
    {
        cin >> num ;
        insert_at_end(head,tail,num) ;
    }

    display(head) ;

    int n1 ;
    cin >> n1; 
    int sum = sum_of_last_node(head , n1) ; 
    cout << sum  ; 
    return 0 ; 
}





// another method 

/*
#include<iostream> 
using namespace std; 

class node{
    public:
    int data; 
    node *next ; 

    node(int data)
    {
        this->data = data ;    
        next = NULL ; 
    }
};
void insert_at_end(int data , node *&head)
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

void print_list(node *head)
{
    while(head!=nullptr)
    {
        cout << head->data << " " ; 
        head = head->next ; 
    }

}

int sum_of_last_node(node *head , int num , int num_to_add)
{
    int size = num-num_to_add ; 
    
    if(num_to_add<0 || num_to_add>num )
    {
        return 0 ; 
    }
    else
    {
        node *temp = head ; 
        for(int i=0 ; i<size ; i++)
        {
            temp = temp->next ; 
        }
        int sum = 0 ; 
        while(temp!=NULL)
        {
           sum += temp->data ; 
           temp = temp->next  ;  
        }
        return sum ; 
    }

}

int main()
{
    int n , element;
    cin >> n ; 
    node *head = NULL ; 

    for(int i=0 ; i<n ; i++)
    {
        cin >> element ; 
        insert_at_end(element , head) ; 
    }

    print_list(head);
    cout << endl ; 

    int num_to_add ; 
    cin >> num_to_add ; 

    int sum = sum_of_last_node(head , n , num_to_add) ; 

    cout <<sum ;



}

*/