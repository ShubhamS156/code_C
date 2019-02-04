#include<iostream>
int square(int x){
  return x*x;
}
double square(double y){
  return y*y;
}
int main(int argc, char const *argv[]) {
  int a=7;
  double b=7.5;
  std::cout << "int value " <<a<<'\t'<<square(a)<<'\n';
  std::cout << "double value" <<b<<'\t'<<square(b)<<'\n';
  return 0;
}
//when function overloading the parameter type name or order should be different else it will be a compilation error.
