// here we check the triangle is valid or not 
#include<iostream>
using namespace std;
//create the class Triangle 
class Triangle{
  private:
  float s1, s2 , s3;
  public:
  void getSide();
  void validateTriangle();
};
void Triangle::getSide(){
  cout<<"enter s1 :"<<endl;
  cin>>s1;
  cout<<"enter s2 :"<<endl;
  cin>>s2;
  cout<<"enter s3 : "<<endl;
  cin>>s3;
}

void Triangle::validateTriangle(){
  if(s1<=0||s2<=0||s3<=0){
    cout<<"enter valid side"<<endl;
  }
  if(s1+s2>=s3 || s1+s3 >=s2 || s2 + s3 >= s1){
    cout<<"valid triangle";
  }else{
    cout<<"invaid "<<endl;
  }
}
int main(){
  Triangle t1;
  t1.getSide();
  t1.validateTriangle();
  return 0 ;
}