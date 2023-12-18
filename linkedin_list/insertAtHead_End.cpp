// preprocessor
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

void insertAtHead(Node *&head, int data)
{
  // create newNode
  Node *newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}

void printList(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "-> ";
    temp = temp->next;
  }
  cout << "nullptr" << endl;
}

void insertAtEnd(Node *&tail, int data)
{
  Node *newNode = new Node(data);
  
    tail->next = newNode;
    tail = newNode;
 
}

// main start here ...
int main()
{
  Node *node1 = new Node(10);
  Node *tail = node1;
  Node *head = node1;
  insertAtHead(head, 30);
  insertAtHead(head, 45);
  insertAtEnd(tail, 23);
  printList(head);

  return 0;
}
