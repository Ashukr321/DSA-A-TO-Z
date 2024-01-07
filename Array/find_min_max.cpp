//preprocessor
#include<iostream>
using namespace std;

void minMax(int arr[],int n){
  int min = INT32_MAX; 
  int max = INT32_MIN;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i]>max){
      max = arr[i];
    }
     if(arr[i]<min){
      min = arr[i];
     }
  }
  sum = min+max;
  cout<<"the sum of the min and max :"<<sum<<endl;
  cout<<"max element is :"<<max<<endl;
  cout<<"min element is : "<< min<<endl;
}

//main start here ...
int main(){
   int arr[]= {235,23,4,325,46,5,1,4};
   int size = sizeof(arr)/sizeof(int);
   minMax(arr,size);
  return 0;
}