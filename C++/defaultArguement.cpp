#include <iostream>
using namespace std;
int add(int x=3,int y=2);
int main(int argc, char const *argv[]) {
  std::cout << "Default addition is " << add();
  std::cout << "Custom addition is " <<add(5,6);
  return 0;
}
int add(int x,int y){
  return x+y;
}
/*compilation error to specify default argument in both prototype and header of function*/
/*atleast arguement at the one's place should be defautl */
