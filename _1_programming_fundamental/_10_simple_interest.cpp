#include<iostream>
using namespace std;
class SimpleInterest{
  private :
  float p , r , t;
  public:
  void getData ();
  void sit();
};

void SimpleInterest::getData(){
  cout<<"enter the value of p :"<<endl;
  cin>>p;
  cout<<"enter the value of r :"<<endl;
  cin>>r;
  cout<<"enter the vaue if t :"<<endl;
  cin>>t;
}
void SimpleInterest::sit(){
  if(p<=0||r<=0||t<=0){
    cout<<"plz enter the valid input: "<<endl;
  }else{
    float s = (p*r*t)/100;
    cout<<"simple interst : "<<s<<endl;
  }
}

int main(){

  SimpleInterest si;
  si.getData();
  si.sit();
  return 0; 
}