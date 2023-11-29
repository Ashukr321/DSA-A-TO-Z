// cricumferenc of the two number 
#include<iostream>
using namespace std;
// create the class 
class Circumference {
  private:
  float r;
  public:
  void getRadius();
  void calCircumference();
};

void Circumference::getRadius(){
  cout<<"enter the radius of the circle "<<endl;
  cin>>r;
}

void Circumference::calCircumference(){
  if(r<=0){
    cout<<"plz enter valid radius"<<endl;
  }else{
    cout<<"circumference of circle :"<<2*3.14*r<<endl;
  }
}

int main(){
  //create the object of the class 
  Circumference c1;
  c1.getRadius();
  c1.calCircumference();

  return 0;
}