#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter the number of row "<<endl;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < (2*n)-1; j++)
    {
      cout<<"* ";
    }
    cout<<endl;  
    
  }
  

}