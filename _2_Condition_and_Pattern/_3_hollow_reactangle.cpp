// hollow reactangel in the cpp 
#include<iostream>
using namespace std;

class Pattern{
  public:
  int row  , col;
  void getRowCol();
  void printHollowRec();
};

void Pattern::getRowCol(){
  cout<<"enter the number of rows :"<<endl;
  cin>>row;
  cout<<"enter the number of cols :"<<endl;
  cin>>col;
}

void Pattern::printHollowRec(){
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if(i==0||i==row-1){
        cout<<"*";
      }
      else if(j==0 || j==col-1){
        cout<<"*";
      }else{
        cout<<" ";
      }
    }
    cout<<endl; 
  }
}

int main(){
  Pattern p1;
  p1.getRowCol();
  p1.printHollowRec();
  return 0; 
}