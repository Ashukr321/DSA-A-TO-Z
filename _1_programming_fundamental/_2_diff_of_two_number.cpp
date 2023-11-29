// calculate diff of two number 
#include<iostream>
using namespace std;
class Number {
  // instance variables 
  int a , b; 
  public:
  void getNumber();
  void diff();
};

void Number::getNumber(){
  cout << "Enter the first number : "<<endl;
  cin>>a;
  cout<<"Enter the second  number : "<<endl;
  cin>>b;
}

void Number::diff(){
  if(a ==0 || b == 0 ){
    cout<<"your  have to first give the two number "<<endl;
  }else{
    cout<<"the diffrence of two num : "<<a-b<<endl;
  }
}
// main method start here ....
int main(){
  //create the object of the class 
  Number n1;
  n1.getNumber();
  n1.diff();
  return 0; 
}