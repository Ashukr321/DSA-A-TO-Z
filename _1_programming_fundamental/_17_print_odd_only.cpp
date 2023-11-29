// print number only odd number
#include<iostream>
using namespace std;
class Number {
  int n;
  public:
  void getNum();
  void printOdd();
};
void Number::getNum(){
  cout<<"enter your number"<<endl;
  cin>>n;
}
void Number::printOdd(){
  if(n<=0){
    cout<<"enter valid number"<<endl;
  }
  else{
    for (int i = 1; i < n; i++)
    {
      if(i%2!=0){
        cout<<i<<endl;
      }
    }
    
  }
}
int main(){
  Number n1;
  n1.getNum();
  n1.printOdd();
  return 0;
}