//preprocessor
#include<iostream>
using namespace std;

void printArray (int arr[],int n){
  for (int i = 0; i < n; i++)
  {
      cout<<arr[i] <<" ";
  }
  
}
void bubbleSort(int arr[],int n){
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-1-i; j++)
    {
      if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j]= arr[j+1];
        arr[j+1]= temp;
      }
    }
    
  }
  
}
//main start here ...
int main(){
  int arr[  ] = {34,123,42,45,24,52,4};
  int size = sizeof(arr)/sizeof(int);
  printArray(arr,size);
  bubbleSort(arr,size);
  cout<<endl;

  printArray(arr,size);
  return 0;
}