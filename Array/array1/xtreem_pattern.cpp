// preprocessor
#include <iostream>
using namespace std;

void xtreemPattern(int arr[], int n)
{
  int i = 0;
  int j = n - 1;
  while (true)
  {

    if (i > j)
    {
      break;
    }
    if (i == j)
    {
      cout << arr[i] << endl;
    }
    else
    {
      cout << arr[i] << endl;
      cout << arr[j] << endl;
    }
    i++;
    j--;
  }
}
// main start here ...
int main()
{
  int arr[] = {10, 20, 30, 40, 50, 70, 80};
  int size = sizeof(arr) / sizeof(int);

  xtreemPattern(arr, size);
  return 0;
}