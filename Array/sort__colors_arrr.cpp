//preprocessor
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


//main start here ...

int main(){
  vector<int> arr;
  arr.push_back(1);
  arr.push_back(0);
  arr.push_back(2);
  arr.push_back(0);
  sort(arr.begin(),arr.end());
  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i]<<endl;
  }
  
  return 0;
}