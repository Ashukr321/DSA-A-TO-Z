// number half pyramid 
#include<iostream>
using namespace std;
class Pattern{
  public:
  int row ;
  void setRow();
  void printPattern();
};
void Pattern ::setRow(){
  cout<<"enter the number of rows"<<endl;
  cin>>row;
}
void Pattern::printPattern(){
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout<<j+1<<" ";
    }
    cout<<endl;
  }
}

int main(){
  Pattern p;
  p.setRow();
  p.printPattern();
  return 0;
}


