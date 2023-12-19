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

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int i = start + 1;
    int j = end;

    while (i <= j) {
        while (i <= j && arr[i] <= pivot) {
            i++;
        }

        while (i <= j && arr[j] > pivot) {
            j--;
        }

        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[start], &arr[j]);

    return j;
}

void quickSort(int arr[], int start, int end) {
    if (start < end) {
        int pi = partition(arr, start, end);
        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}
// main start here ...
int main()
{
  int arr[] = {1, 4, 1, 4, 34, 2, 435, 3, 6, 67, 54, 5, 24, 3, 4, 54, 3, 5, 643, 3, 32};
  int size = sizeof(arr) / sizeof(int);
  printArray(arr, size);
  quickSort(arr, 0, size - 1);
  cout << "\n\n Sorted array : \n";
  printArray(arr, size);
  return 0;
}