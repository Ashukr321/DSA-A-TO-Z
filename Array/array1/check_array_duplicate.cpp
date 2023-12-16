// preprocessor
#include <iostream>
using namespace std;

int checkDuplicateElement(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i != j && arr[i] == arr[j])
      {
        return 1;
      }
    }
    
  }
  return 0;
  }

  // main start here ...
  int main()
  {
    int arr[] = {1, 2, 3, 4, 5, 7};
    int size = sizeof(arr) / sizeof(int);
     int data = checkDuplicateElement(arr, size);
    if(data ==1 ){
      cout << "Array contains duplicate element"<<endl;
    }
    else
    {
      cout<<"no contains duplicate elements in the array "<<endl;
    }
    return 0;
  }