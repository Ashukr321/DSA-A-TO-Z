//preprocessor
#include<iostream>
#include<vector>
using namespace std;


//main start here ...
int main(){
  int arr[] = {1,2,3,4,6,8};
  int brr[] = {3,4,9,10};
  int size1 = sizeof(arr)/sizeof(int);
  int size2 = sizeof(brr)/sizeof(int);
  vector<int> ans;
  for (int i = 0; i < size1; i++)
  {
    int element = arr[i];
    for (int j = 0; j <size2 ;j++)
    {
       if(element== brr[j]){
        ans.push_back(element);
       }
    }
    
  }

  for (int i = 0; i < ans.size(); i++)
  {
    cout<<ans[i]<<" ";
  }
  
  
  return 0;
}