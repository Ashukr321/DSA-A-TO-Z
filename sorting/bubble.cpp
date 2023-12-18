// preprocessor
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}



void bubbleSort(int arr[], int n)
{

  for (int i = 0; i < n - 1;i++)
  {
    bool flag = true;
    for (int j = 0; j < n - 1 - i; j++)
    {
      if(arr[j]>arr[j+1]){
     int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
      flag = true;
      }
     
    }
    if(flag ==true){
      return;
    }
  }
}
// main start here ...
int main()
{
  int arr[] = {2, 3, 32, 32, 532, 5, 32, 53, 2, 532, 532, 5, 32};
  int size = sizeof(arr) / sizeof(int);
  cout << "after sorting" << endl;
  bubbleSort(arr, size);
  printArray(arr,size);
  return 0;
}