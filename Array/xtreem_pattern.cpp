// preprocessor
#include <iostream>
using namespace std;

void printXtreem(int arr[], int n)
{
  int i = 0;
  int j = n - 1;
  while (i<= j)
  {
    cout << arr[i] << " ";
    // this will help to avoid print the data twice 
    if(i!=j){
      cout << arr[j] << " ";
    }
    i++;
    j--;
  }
}
// main start here ...
int main()
{
  // create the  array
  int arr[] = {10, 20, 30, 40, 50};
  int size = sizeof(arr) / sizeof(int);
  printXtreem(arr, size);
  return 0;
}