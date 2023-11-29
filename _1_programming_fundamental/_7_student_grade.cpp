// student grade system
#include <iostream>
using namespace std;
// create class
class Student
{
private:
  float marks;

public:
  void getMarks();
  void gotGrade();
};

void Student::getMarks()
{
  cout << "enter your subject marks " << endl;
  cin >> marks;
}
void Student::gotGrade()
{
  if (marks <= 0)
  {
    cout << "plz enter valid marks " << endl;
  }
  else
  {
    if (marks >= 90)
    {
      cout << "A" << endl;
    }
    else if (marks >= 80)
    {
      cout << "B" << endl;
    }
    else if (marks >= 70)
    {
      cout << "C" << endl;
    }
    else if (marks >= 60)
    {
      cout << "D" << endl;
    }
    else
    {
      cout << "E" << endl;
    }
  }
}

int main()
{
  // create the object of the Student
  Student s1;
  s1.getMarks();
  s1.gotGrade();
}