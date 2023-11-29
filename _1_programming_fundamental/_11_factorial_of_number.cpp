// factorial of number 
#include<iostream>
using namespace std;
// create the class 
class Fact{
  // private 
  private :
  int n ; 
  public:
  void getNum();
  void calFac();
};

void Fact::getNum(){
  cout<<"enter the your number "<<endl;
  cin>>n;
}
void Fact::calFac(){
  int fact =1;
  if(n<0){
    cout<<"enter  valid data ! "<<endl;

  }else{
    for (int i = 1; i <= n; i++)
    {
      fact=fact*i;
    }
  }
  cout<<"factorial of enter your number is :"<<fact;
}
int main(){
  //create the  object of the class Fact 
  Fact f1;
  f1.getNum();
  f1.calFac();
  return 0; 
}