// preprocessor
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
 for (int i = 0; i < n; i++)
 {
  cout<<arr[i]<<" ";
 }
}
int linearSearch(int arr[], int n, int target)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
  }
  return -1;
}
// main start here ...
int main()
{
  // create the array
  int arr[] = {23, 4, 34, 3, 32};
  int size = sizeof(arr) / sizeof(int);
  printArray(arr, size);
  cout<<endl;

  int index = linearSearch(arr, size, 3);
  cout << "element  index is : " << index << endl;
  return 0;
}