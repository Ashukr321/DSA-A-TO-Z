// preprocessor
#include <iostream>
#include <vector>
using namespace std;

// main start here ...
int main()
{
  vector<int> arr(10);
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   cout << arr[i] << " ";
  // }

  // cout<<endl;
  // // if we declare the size of the array then all the element of  that size arrays is allocated with the zero
  // vector<int> brr (13,23);// here size of the vector is 13 and all value is 23 
  // for (int i = 0; i < brr.size(); i++)
  // {
  //     cout<<brr[i]<<" ";
  // }
  

  // insert element in the end of the  vector 
  //  we have a function that is push_back()
  arr.push_back(123);
  arr.push_back(5);
  arr.push_back(5);
  arr.insert(arr.begin(),23);
  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}