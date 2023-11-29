// check number is even or odd ;
#include <iostream>
using namespace std;
class Number
{
private:
  int n;

public:
  void getNum();
  void checkEvenOdd();
};

void Number::getNum()
{
  cout << "Enter a number : ";
  cin >> n;
};

void Number::checkEvenOdd()
{
  if (n == 0 || n < 0)
  {
    cout << "enter the valid input" << endl;
  }
  else
  {
    if (n % 2 == 0)
    {
      cout << "your number is even :" << n << endl;
    }
    else
    {
      cout << "your number is odd :" << n << endl;
    }
  }
}
int main()
{
  // create the object of the number
  Number n1;
  n1.getNum();
  n1.checkEvenOdd();
  return 0;
}