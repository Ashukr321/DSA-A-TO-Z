// solid rectangle 
#include<iostream>
using namespace std;

void solidRec(int r,int c){
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}

// main methods start;
int main(){ 
  int r;
  int c;
  cout<<"enter  the no. of row "<<endl;
  cin>>r;
  cout<<"enter the no . of col "<<endl;
  cin>>c;
  solidRec(r,c);
  return 0; 
}