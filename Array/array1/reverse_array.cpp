//preprocessor
#include<iostream>
using namespace std;


void printArray(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
}
void reverseArray(int arr[],int n){
  int start=0,end=n-1;
  while (start<=end){
    // swap start and end
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;

  }

  {
    /* code */
  }
  
}
//main start here ...
int main(){
  int arr[]= {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(int);
  printArray(arr,size);
  reverseArray(arr,size);
  cout<<endl;
  printArray(arr,size);

  return 0;
}
