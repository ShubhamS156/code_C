#include <iostream>
using namespace std;
class Count{
public:
  void setX(int value){
    x=value;
  }
  void print(){
    cout<<x<<endl;
  }
private:
  int x;
};
int main(int argc, char const *argv[]) {
  Count counter;
  Count &counterRef=counter;
  Count *counterPtr=&counter;

  //modifying x using refrence identifier and pointer
std::cout << "Setting value of x to 1 using identfier/name of oject" << '\n';
  counter.setX(1);
  counter.print();
  std::cout << "Setting value of x to 2 using refrenceS to object Counter" << '\n';
  counterRef.setX(2);
  counterRef.print();
  std::cout << "Setting value of x to 3 using pointer to object Counter" << '\n';
  counterPtr->setX(3);
  counterPtr->print();
  return 0;
}
