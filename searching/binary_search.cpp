//preprocessor
#include<iostream>
#include<vector>
using namespace std;

int binarySearch (vector<int> arr, int l ,int h , int target) {
  if(l > h) return -1;
  if(l<=h){
    int mid = l+(h-l)/2;
    if(arr[mid]== target){
      return mid;
    } else if(arr[mid]<target){
      return binarySearch(arr, mid+1,h, target);
    }else{
      return binarySearch(arr,l , mid-1, target);
    }
  }
  return -1;
}

//main start here ...
int main(){
  vector<int> arr= {1,2,3,4,5,6,7,8};
  int l = 0;
  int h = arr.size()-1;
  int target = 6;
  int elementIndex = binarySearch(arr,l , h,target);
  if(elementIndex==-1){
    cout<<"element is not present  in the vector ! "<<endl;
  }else{
    cout << "Element is present at index : " << elementIndex ;
  }
  return 0;
}