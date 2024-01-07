//preprocessor

#include<iostream>
#include<vector>
using namespace std;


//main start here ...
int main(){
  // create the vector
  vector<int> arr;
  arr.push_back(13);
  arr.push_back(34);
  arr.push_back(3);
  arr.push_back(34);
  arr.push_back(34);
  //size 
  cout<<"Size of the array is : " <<arr.size()<<endl;
  //capacity of the array 
  cout<<"Capacity of the array is : "<<arr.capacity()<<endl;
  return 0;
}
//capcity the how much maximum capcity element is going to be store inthe vector 
// size give the current how much element is store in the vector 
// vector is a dynamic types its is autmatically allocated incresed