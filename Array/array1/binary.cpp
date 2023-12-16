//  here we see the binary search in the cpp 
//preprocessor
#include<iostream>
using namespace std;

int binarySearch(int arr[],int l ,int h , int target){
  while (l<=h)
  {
    int mid = l+(h-l)/2;
    if(arr[mid]==target){
      return mid;
    }
    if(arr[mid]>target){
      return binarySearch(arr,l , mid-1, target);
    }else
    {
      return binarySearch(arr, mid+1,h, target);
    }
  }
  return -1;
  
}
//main start here ...
int main(){
  int arr[] = {1,2,3,4,5,6,7,8};
  int target = 7;
  int size = sizeof(arr)/sizeof(int);
  int l = 0; 
  int h = size-1;
  int index   = binarySearch(arr,l , h , target);
  if(index !=-1){
    cout<<"Element is present at index " <<index ;
  }
  return 0;
}