#include <iostream>
using namespace std;
class Box{
public:
  static int objectCount;
Box(double a,double b,double c){
    std::cout << " constructor called " << '\n';
    length=a;
    breadth=b;
    height=c;
    objectCount++;
  }
  double Volume(){
    return length*breadth*height;
  }
  static int getCount(){
    return objectCount;
  }
private:
  double length;
  double breadth;
  double height;
};
int Box::objectCount=0;
int main(int argc, char const *argv[]) {
  std::cout << "Initialy objectCount is "<<Box::getCount() << '\n';
  Box box1(1,2,3);
  cout<<"Volume is "<<box1.Volume()<<" and objectCount is "<<box1.Box::getCount()<<'/n';
  Box box2(4,5,6);
  cout<<"Volume is "<<box2.Volume()<<" and objectCount is "<<box2.Box::getCount()<<'/n';
  std::cout << "final objectCount is "<<Box::getCount()<< '\n';


  return 0;
}
