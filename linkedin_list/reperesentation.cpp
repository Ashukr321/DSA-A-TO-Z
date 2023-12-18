// preprocessor
#include <iostream>
using namespace std;

// impelementing the singly linked list

class Node
{
public:
  int data;
  Node *next;
  // constructor
  Node(int data)
  {
    this->data = data;
    next = NULL; // initially node next is pointing to the null
  }
};


// insert at head of the linkded list  
//  here we take the original linked list 
// here we take the linked list by the pass by the reference 
void insertAtHead(Node * &head , int data){
  Node* newNode=new Node(data); 
  newNode->next = head; 
  head = newNode; 
}


// printNode 
void printNode(Node * & head){
  Node * temp = head;
  while (temp != NULL)
  {
    cout<<temp->data<<"->";
    temp= temp->next;
  }
  
}
// main start here ...
int main()
{
  Node * head =new Node(1);
  insertAtHead(head , 23);
  insertAtHead(head , 2);
  insertAtHead(head , 2);
  insertAtHead(head , 2);
  cout<<"Linked List is : ";
  printNode(head);





  


  return 0;
}