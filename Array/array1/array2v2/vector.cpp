//preprocessor
#include<iostream>
#include<vector>
using namespace std;


//main start here ...
int main(){
 // create a vector
//  vector <int> arr(5);  //create a vector of size 5 with all elements
//   // cout<<arr.size()<<endl;
//   // cout<<arr.empty()<<endl; // 0 for the true 
//   // cout<<arr.capacity()<<endl;

//   // insert element in the end of the array 
//   arr.push_back(23);
//   arr.push_back(23);

//   arr.push_back(2);
//   arr.pop_back();// this  function  does't take any argument in the function 

//   // print  the vector 
//   for(int i =  0; i<arr.size(); i++){
//     cout<<arr[i] <<" ";
//   }
//   cout<<endl;
//   cout<<arr.capacity()<<endl;

vector<int> arr(10,-110);
  // iterate arr using for loop 
  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i]<< " ";
  }
  cout<<endl;
  vector<int> brr{10,32,23,2,3,6};
  for (int i = 0; i < brr.size(); i++)
  {
    cout<<brr[i]<<" ";
  }
  cout<<brr.size()<<endl;
  
  return 0;
}