//preprocessor
#include<iostream>
using namespace std;
#define max 10
//create the class of the stack 
class Stack {
  int top ;
  
  // here we create the  array of size max 
  int arr[max];

  public:
  Stack (){
    top = -1;
  }

  void push (int data);
  bool isEmpty();
  void printElement();

};



bool Stack::isEmpty(){
  if(top<max){
    return true;
  }else{
    return false;
  }
}
void Stack ::push(int data){
  if(isEmpty()){
    top++;
    arr[top] = data;
  }
  cout<<data<<" :element is inserted at index "<<top<<endl;
}

void Stack::printElement(){
  for (int i = 0; i <=top; i++)
  {
    cout<<arr[i]<<endl;
  }
  
}


//main start here ...
int main(){
  //create the object of the stack class 
  Stack s1;
  s1.push(10);
  s1.push(3);
  s1.push(1);
  s1.printElement();

  return 0;
}