// preprocessor
#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}

int bianrySearch(vector<int> arr, int target){
  int l  = 0 ;
  int h = arr.size()-1;
  while (l<=h)
  {
    int mid = l+(h-l)/2;
    if(arr[mid] == target){
      return mid;
    }else if( arr[mid]>target){
      h  = mid-1;
    }else{
      l = mid+1;
    }
  }
  return -1;
  

}
// main start here ...
int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 9};
  int target  = 5;

  int index = bianrySearch(arr,target);
  if(index ==-1){
    cout<<"element is not present at index of :";
  }else{
    cout<<"element is preset at index : "<<index <<endl;
  }
  return 0; 

}