//preprocessor
#include<iostream>
#include<vector>
using namespace std;


//main start here ...
int main(){
  vector < int> v;
  v.push_back(13);
  v.push_back(12);
  v.push_back(4);


  cout<<v[0]<<endl;
  cout<<v.size()<<endl;
  cout<<v.capacity()<<endl;
  v.pop_back();
  cout<<v.size()<<endl;
  
  return 0;


}