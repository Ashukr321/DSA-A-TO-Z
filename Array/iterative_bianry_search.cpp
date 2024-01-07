#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int l = 0;
    int h = size - 1;
    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 6, 6, 7, 25, 65, 65, 234, 534, 654};
    int target = 7;
    int size = sizeof(arr) / sizeof(int);

    int elementIndex = binarySearch(arr, size, target);

    if (elementIndex != -1) {
        cout << "Element found at index: " << elementIndex << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
