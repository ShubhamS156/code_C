#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[]) {
  int num[10]={1,2,3,4,5,6,7,8,9,0};
for(int i=0;i<10;++i){
  std::cout <<setw(10)<< num[i] ;
  if ((i+1)%4==0) {
    std::cout << '\n';
  }
  if (i%4!=0) {
  std::cout << '\n';
  }
}
  return 0;
                         //ret
}
