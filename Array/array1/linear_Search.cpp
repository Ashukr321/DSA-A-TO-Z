//preprocessor
#include<iostream>
using namespace std;

int linearSearch (int arr[],int n,int target ){
  for (int i = 0; i < n; i++)
  {
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
  
}

int getMax(int arr[],int n){
  int max = INT32_MIN; // 1 
  for (int i = 0; i < n; i++) // // 1+ n+1 
  {
    if(arr[i]>max){ //1 
      max = arr[i]; // 1
    }
  }
  return max; // 1
}

//main start here ...
int main(){
  // here we create the object of  the array so we use the size 
  int arr[] ={1,2,41,4,1,5,13};
  int size = sizeof(arr)/sizeof(int);
  int target = 5;
  int index  = linearSearch(arr,size,target);
  if(index==-1){
    cout<<"Element is not present in the array";
  }
  else{
    cout<<"element is present at index of "<<index<<endl;
  }

  int max  = getMax(arr,size);
  cout<<max<<endl;

  return 0;
}