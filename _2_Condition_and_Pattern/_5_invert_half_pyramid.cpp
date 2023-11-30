#include <iostream>
using namespace std;

class Pattern
{
  int row, col;

public:
  void setRow();
  void printPyramid();
};
void Pattern::setRow()
{
  cout << "enter the no. of rows: " << endl;
  cin >> row;
  
}
void Pattern::printPyramid()
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j <row-i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
int main()
{
  Pattern p;
  p.setRow();
  p.printPyramid();
  return 0;
}