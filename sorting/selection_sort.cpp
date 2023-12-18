//preprocessor
#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
  for (int i = 0; i < n-1; i++)
  {
    int min_idx  = i;
    
    for (int j = i+1; j < n; j++){
       if(arr[j]<arr[min_idx]){
          min_idx = j;
       }
    }
    int temp = arr[i];
    arr[i] = arr[min_idx];
    arr[min_idx] = temp;

    
  }
  
}
void printArray(int arr[],int n){
  for (int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}


//main start here ...
int main(){
  int arr[]= {2,3,32,423,4,32,4,32,432,};
  int size = sizeof(arr)/sizeof(int);
  printArray(arr,size);
  selectionSort(arr,size);
  cout<<"After Selection Sort: "<<endl;
  printArray(arr,size);
  return 0;
}