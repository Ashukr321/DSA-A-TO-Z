// half pyramid triangle
#include <iostream>
using namespace std;
class Pattern
{
public:
  int row;
  void getRow();
  void printHalfPattern();
};

void Pattern::getRow()
{
  cout << "Enter the number of row" << endl;
  cin >> row;
}

void Pattern::printHalfPattern()
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
int main()
{
  // create the object of the class
  Pattern p;
  p.getRow();
  p.printHalfPattern();
  return 0;
}