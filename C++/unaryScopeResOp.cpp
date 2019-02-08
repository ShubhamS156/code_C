#include <iostream>
using namespace std;
int number=5;
int main(int argc, char const *argv[]) {
  int number=10;
  std::cout << "local number" << number<<endl;
  std::cout << "global number" <<::number;//unary scope resolution operator is used to acess a global variable of the same name
return 0;
}
//unary scope resolution operator cannot be used to access local variable outside its scope
