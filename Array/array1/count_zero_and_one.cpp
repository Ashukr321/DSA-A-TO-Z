//preprocessor
#include<iostream>
using namespace std;
void coutZeroAndOne(int arr[],int n){
  int czero = 0;
  int cone = 0;
  for (int i=0;i<n;i++){
    if(arr[i]==0){
      czero++;
    }else if(arr[i]==1){
      cone++;
    }
  }
  cout<<"the number of zero = "<<czero<<endl;
  cout<<"the number of zero = "<<cone<<endl;
}

//main start here ...
int main(){
  int arr[] = {1,1,1,1,1,0,0,0,0,0,1,1,1,};
  
  int size = sizeof(arr)/sizeof(int);
  coutZeroAndOne(arr,size);
  return 0;
}