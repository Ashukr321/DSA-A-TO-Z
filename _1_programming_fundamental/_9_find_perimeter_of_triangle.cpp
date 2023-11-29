// perimeter of triangle 
#include<iostream>
using namespace std;
class Triangle {
  private:
  float s1,s2,s3;
  public:
  void getSide();
  void getPerimeter();
};

void Triangle::getSide(){
  cout<<"enter the value of the s1 :"<<endl;
  cin>>s1;
  cout<<"enter the value of the s2 :"<<endl;
  cin>>s2;
   cout<<"enter the value of the s3 :"<<endl;
  cin>>s3;
}

void Triangle::getPerimeter(){
  
  if(s1<=0||s2<=0||s3<=0){
    cout<<"enter valid side"<<endl;
  }else{
     cout<<"The Perimeter is:"<<s1+s2+s3<<endl;
  }
}
int main(){
  // create the object of the Triangle 
  Triangle t1;
  t1.getSide();
  t1.getPerimeter();
  return 0; 
}