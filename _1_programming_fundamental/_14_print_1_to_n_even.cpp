// print 1 to n only even number 
#include<iostream>
using namespace std;

class Number {
  private:
  int num;
  public:
  void getNum();
  void printEven();
};
void Number ::getNum(){
  cout<<"enter your number"<<endl;
  cin>>num;
}
void Number ::printEven(){
  if(num<=0){
    cout<<"enter valid number"<<endl;
    return;
  }else{
    for (int i = 1; i <= num; i++)
    {
      if(i%2==0){
        cout<<i<<" ";
      }
    } 
  }
}
int main(){
  Number n1;
  n1.getNum();
  n1.printEven();
  return 0;
}