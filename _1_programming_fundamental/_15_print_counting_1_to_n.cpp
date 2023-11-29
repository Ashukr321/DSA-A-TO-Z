#include <iostream>
using namespace std;
class Number
{
  int n;

public:
  void getNum();
  void printNum();
};
void Number::getNum()
{
  cout << "Enter a number : ";
  cin >> n;
}
void Number::printNum()
{
  int sum = 0; 
  for (int i = 1; i <= n; i++)
  {
    cout << i << endl;
    sum+=i;
  }
  cout<<"the sum of the 1 to n "<<sum<<endl;
}

int main()
{
  //create the calss of the Number
   Number n1;
   n1.getNum();
   n1.printNum();
  return 0;
}