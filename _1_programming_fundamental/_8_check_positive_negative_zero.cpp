#include<iostream>
using namespace std;

class Number {
  int n;
public:
  void getNum();
  void checkPnz();
};

void Number::getNum() {
  cout << "Enter your number: " << endl;
  cin >> n;
}

void Number::checkPnz() {
  if (n > 0) {
    cout << "Your number is positive." << endl;
  } else if (n == 0) {
    cout << "Your number is zero." << endl;
  } else if (n < 0) {
    cout << "Your number is negative." << endl;
  } else {
    cout << "Please enter a valid number." << endl;
  }
}

int main() {
  Number n1;
  n1.getNum();
  n1.checkPnz();
  return 0;
}
