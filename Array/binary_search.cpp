// preprocessor
#include <iostream>
using namespace std;
int binarySearch(int arr[], int target, int l, int h)
{
  if (l > h)
    return -1;
  if (l <= h)
  {
    int mid = (l + h) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      return binarySearch(arr, target, mid + 1, h);
    }
    else
    {
      return binarySearch(arr, target, l, mid - 1);
    }
  }
  return -1;
}

// main start here ...
int main()
{
  int arr[] = {23, 3, 4, 132, 41, 325, 134, 51};
  int size = sizeof(arr) / sizeof(int);
  int target = 5;
  int l = 0;
  int h = size - 1;
  int element_pre_at_index = binarySearch(arr, target, l, h);
  cout << element_pre_at_index << endl;
  return 0;
}