#include<iostream>
using namespace std;
class Sum{
public:
  void set(int a,int b){
    x=a;
    y=b;/* code */
  }
  void display(){
    std::cout<<"x = " << x <<"\ny = "<<y<< '\n';
  }
  void operator +(Sum obj){
    x=x+obj.x;
    y=y+obj.y;
display();
  }
private:
  int x,y;
};
int main(int argc, char const *argv[]) {
  Sum s1,s2,s3;
  s1.set(4,5);
  s2.set(6,7);
  s3.set(8,9);
  s1+s2;
  return 0;
}
