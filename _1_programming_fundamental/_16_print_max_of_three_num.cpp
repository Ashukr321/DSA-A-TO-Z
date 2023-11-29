// print max of three number
#include <iostream>
using namespace std;
class Number
{
  int n1, n2, n3;

public:
  void getNum();
  void findMax();
};
void Number::getNum()
{
  cout << "Enter the first number : ";
  cin >> n1;
  cout << "Enter the second number : ";
  cin >> n2;
  cout << "Enter the third number : ";
  cin >> n3;
};

void Number::findMax()
{
  if (n1 > n2 && n1 > n3)
  {
    cout << "max num :" << n1 << endl;
  }
  else if (n2 > n1 && n2 > n3)
  {
    cout << "max num : " << n2 << endl;
  }
  else
  {
    cout << "max num : " << n3 << endl;
  }
}
int main()
{
  Number n1;
  n1.getNum();
  n1.findMax();
}