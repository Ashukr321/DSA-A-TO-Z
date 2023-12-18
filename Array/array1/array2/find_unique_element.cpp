//preprocessor
#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr){
  int ans = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    ans = ans^arr[i];
  }
  
  return ans;
}
//main start here ...
int main(){
  int n;
  cout<<"enter the size of array ! "<<endl;
  cin>>n;
  vector<int> v(n);
  cout<<"enter the elements"<<endl;
  for (int i = 0; i < v.size(); i++)
  {
    cin>>v[i];
  }

  int uniqueElement = findUnique(v);
  cout<<"unique element : "<<uniqueElement<<endl;
  return 0;
}