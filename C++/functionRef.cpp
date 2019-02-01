#include <iostream>
using namespace std;
int add(int x){
  int &y=x;
   y=7+x;
  return x;
}
int main(int argc, char const *argv[]) {
printf("value returned is %d",add(5));
  return 0;
}
