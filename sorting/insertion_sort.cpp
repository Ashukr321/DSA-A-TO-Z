//preprocessor
#include<iostream>
using namespace std;


void printArray(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
}
void insertionSort (int arr[],int n){
  for (int i = 1; i < n; i++)
  { 
    int temp = arr[i];
     int j = i-1;
     while (j>=0 && arr[j]>temp)
     {
      arr[j+1]=arr[j];
      j--;

     }
    arr[j+1] = temp;

  }
  
}



//main start here ...
int main(){
  int arr[]= {23,4,32,4,32,43,325};
  int size = sizeof(arr)/sizeof(int);
  cout<<"before sorting "<<endl;
  printArray(arr,size);
  cout<<"after sorting "<<endl;
  insertionSort(arr,size);
  printArray(arr,size);
  
  return 0;
}