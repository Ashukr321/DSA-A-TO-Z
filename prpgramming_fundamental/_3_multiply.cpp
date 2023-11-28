// multiplication of the two number
#include <iostream>
using namespace std;

// class of the Number
class Number
{
  // instance variables
private:
  int a, b;

public:
  void getNum();
  void multiTwoNum();
};

void Number ::getNum()
{
  cout << "Enter the number :" << endl;
  cin >> a;
  cout <<"Enter the number :" << endl;
  cin >> b;
};
void Number::multiTwoNum(){
  if(a <0 || b<0){
    cout<<"Plz enter valid input "<<endl;
  }else{
    cout<<"the multiplication of the two number is "<<a*b<<endl;
  }
};

int main()
{
  //create the object 
  Number n1;
  n1.getNum();
  n1.multiTwoNum();
  return 0;
}