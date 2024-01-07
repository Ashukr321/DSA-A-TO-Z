#include<iostream>
using namespace std;

// Function prototype
bool findKey(int arr[][3], int rows, int cols, int key);

int main() {
  int sum = 0;
  int arr[3][3] = {{1, 2, 3}, {1, 3, 4}, {3, 4, 23}};
  int max = INT32_MIN;
  int min = INT32_MAX;
  for (int i = 0; i < 3; i++) {
    int sum2 = 0;
    for (int j = 0; j < 3; j++) {
      cout << arr[i][j] << " ";
      sum += arr[i][j];
      sum2 += arr[i][j];
      if(arr[i][j]>max){
        max = arr[i][j];
      }
      if(arr[i][j]<min){
        min = arr[i][j];
      }
    }
    cout << i << " :row sum " << sum2 << endl;
    cout << endl;
  }
  

  cout << "the sum of the elements: " << sum << endl;
  cout<<"maximum element of the array :"<<max<<endl;
  cout<<"minmum element of the array :"<<min<<endl;
  int key = 4;
  cout << "Key " << key << " found: " << (findKey(arr, 3, 3, key) ? "true" : "false") << endl;

  return 0;
}

// Function definition
bool findKey(int arr[][3], int rows, int cols, int key) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (arr[i][j] == key) {
        return true;
      }
    }
  }
  return false;
}
