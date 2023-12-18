//preprocessor
#include<iostream>
#define size  2
using namespace std;

// Implementing the stack using an array
// Create the class of the Stack 
class Stack {
   int top;
   int arr[size];
public:
   // Constructor 
   Stack() {
      top = -1;
   }
   // Member functions 
   void push(int data);
   bool isUnderflow();
   bool isOverflow();
   int peek();
   void pop();
};

void Stack::pop() {
   if (isUnderflow()) {
      cout << "Sorry! Cannot delete element. Stack is empty." << endl;
      return;
   }
   arr[top] = 0;
   top--;
}

int Stack::peek() {
   if (isUnderflow()) {
      cout << "Stack is empty." << endl;
      return -1; // Assuming -1 represents an empty stack
   }
   return arr[top];
}

void Stack::push(int data) {
   if (isOverflow()) {
      cout << "Stack is full." << endl;
      return;
   }
   // Increment the top index and insert the data at that index 
   top++;
   arr[top] = data;
   cout << data << " is inserted at index: " << top << endl;
}

bool Stack::isUnderflow() {
   return (top == -1);
}

bool Stack::isOverflow() {
   return (top == size - 1);
}

// Main function
int main() {
   // Create the object of the Stack class 
   Stack s1;
   s1.push(12);
   s1.push(34);

   s1.pop();

   int topElement1 = s1.peek();
   if (topElement1 != -1) {
      cout << "Top element of the stack: " << topElement1 << endl;
   }

   return 0;
}
