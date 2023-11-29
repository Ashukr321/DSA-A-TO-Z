// check number is prime or not 
#include<iostream>
using namespace std;
//create the class Number 
class Number {
  private:
  int n ;
  public:
  void getNum();
  void checkPrime();
};
void Number::getNum(){
  cout<<"enter a number :"<<endl;
  cin>>n;
}

void Number::checkPrime(){
  if(n<=0){
    cout<<"enter valid number"<<endl;
    cin>>n;
  }else if(n>0){
    for (int i = 2; i < n; i++)
    {
      if(n%i == 0){
        cout<<"not prime number !"<<endl;
        return;
      }
    }
    cout<<"prime number"<<endl;
    return ;
  }
 
 
}

int main(){
  Number n1;
  n1.getNum();
  n1.checkPrime();
  return 0; 
}