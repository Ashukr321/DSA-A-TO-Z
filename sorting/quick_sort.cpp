#include <iostream>
using namespace std;

void swap(int *a, int *b) {
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

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 34, 324, 32, 5, 345, 4, 563, 6, 47, 6};
    int size = sizeof(arr) / sizeof(int);

    cout << "Before sorting: ";
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    cout << "After sorting: ";
    printArray(arr, size);

    return 0;
}
