#include <iostream>
using namespace std;
class year{
public:
  int yr;
  int mfgyr;
  int expyr;
  void setyrs(int a,int b){
    mfgyr=a;
    expyr=b;
    std::cout << "Manufacture Year :"<<a<< '\n';
    std::cout << "Expiry Year :"<<b<< '\n';

  }
  void period(year l1){
    yr=l1.expyr-l1.mfgyr;
    std::cout << "Life of the product :" <<yr <<"Years"<< '\n';
  }
};

int main(int argc, char const *argv[]) {
  year y1;
  y1.setyrs(3,5);
  y1.period(y1);
  return 0;
}
