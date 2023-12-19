//preprocessor
#include<iostream>
using namespace std;


int linearSearch(int arr[],int n,int target){
  for (int i = 0; i < n; i++)
  {
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
}
//main start here ...
int main(){
  int arr[] = {2,3,432,4,3,32,5,325,36,4,};
  int size = sizeof(arr)/sizeof(int);
  int target = 32;

  int index  = linearSearch(arr,size, target);
  if(index==-1){
    cout<<"element is not present in the array !"<<endl;

  }else{
    cout<<"Element found at index : "<<index<<endl;
  }
  

  return 0;
}