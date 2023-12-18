//preprocessor
#include<iostream>
#include<vector>
using namespace std;


//main start here ...
int main(){
  vector<int>v;
  v.push_back(12);
  v.push_back(14);
  v.push_back(16);
  v.push_back(16);
  v.push_back(1);

  //create the vector iterator object 
  vector<int>::iterator it;
  it = v.begin();

  //v.end () methods give the nothing this method pointing to the end of the vector 
  while (it!=v.end())
  {
    cout<<*it<<endl;
    it++;
  }

  
  
  return 0;
}