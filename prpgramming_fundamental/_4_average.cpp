// average of the two number 
#include<iostream>
using namespace std;
// class of Number 
class Number {
  // instance variables 
  int a , b; 
  public:
  void getNum();
  void calAvg();
};
void Number::getNum(){
  cout << "Enter first number : "<<endl;
  cin>>a;
  cout<<"Enter 2nd number"<<endl;
  cin>>b;
}


void Number::calAvg(){
  if(a ==0 || b==0){
     cout<<"plz enter valid input "<<endl;
  }else{
    cout<<"the average of two number :"<<(a+b)/2<<endl;
  }
}

int main(){

  Number n1;
  n1.getNum();
  n1.calAvg();
  return 0; 
}