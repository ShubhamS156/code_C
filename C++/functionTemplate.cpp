#include <iostream>
#include "maximum.h"
using namespace std;
int main(int argc, char const *argv[]) {
  int a,b,c;
  double d,e,f;
  char g,h,i;

  std::cout << "Enter three integers" << '\n';
  std::cin >> a>>b>>c;
  std::cout << "The maximum integer is " << maximum(a,b,c)<<'\n';
  std::cout<< "Enter three double values"<<'\n';
  std::cin >> d>>e>>f;
  std::cout << "The maximum double value is " <<maximum(d,e,f) <<'\n';
  std::cout << "Enter three characters" << '\n';
  std::cin >> g>>h>>i;
std::cout << "The maximum character is " << maximum(g,h,i)<<'\n';
  return 0;
}
