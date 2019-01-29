#include<iostream>
using namespace std;
class area{
Public:
int area;
area(int length,int breadth){
area=length*breadth;
  std::cout << "Area is " area << '\t\n' ;
}
 int main(int argc, char const *argv[]) {
  area a1(10,20);
  return 0;
}
}
