#include<iostream>
#include<vector>
#include<algorithm> // Include the algorithm header for reverse function
using namespace std;

int main() {
  string name = "ashutosh";
  cout<<"original name : "<<name<<endl;
  cout<<"reverse name :"<<endl;
  reverse(name.begin(),name.end());
  cout << name << endl;

  vector<int>arr;
  arr.push_back(23);
  arr.push_back(45);
  arr.push_back(67);
  for(auto i:arr){
    cout<<i<<" ";
  }
  cout<<endl;
  cout<<"before reversing the array: "<<endl;
  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  reverse(arr.begin(),arr.end());
  cout<<"after reversing the array element :"<<endl;
   for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i]<<" ";
  }
  sort(arr.begin(),arr.end());
  cout<<"\nAfter sorting the elements of the array are:"<<endl;
  for (int i=0; i<arr.size(); i++){
  cout<<arr[i]<<" ";
  }
  return 0;
}
