// add two number is taken from the user
#include <iostream>
using namespace std;

class Number
{
  // instance variables
  int a, b;

public: // access modifier or we can say visibility 
        // public  +
        // private  -
        // protected  #
  // sum  function
  void sum()
  {
    if (a && b == 0)
    {
      cout << "first you have to give the two number" << endl;
      return ; 
    }
    else
    {
      cout << "the sum of the enter your number is " << a + b;
    }
  }
  // get user input data
  void getInput()
  {
    cout << "enter your first number a " << endl;
    cin >> a;
    cout << "enter your 2nd number b" << endl;
    cin >> b;
  }
};

//  main method start here ... 
int main()
{
  // create the object of the class Number
  Number num;
  Number num2;
  num.getInput();
  num.sum();
  return 0;
}