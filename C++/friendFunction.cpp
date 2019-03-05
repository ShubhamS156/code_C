#include <iostream>
using namespace std;
class account{
private:
  int acno;
  float acbal;
  char name[15];
public:
  void setAc(){
    std::cout << "Enter your Name :" << '\n';
    std::cin >> name;
    std::cout << "Enter your Account Number :" << '\n';
    std::cin >> acno;
    std::cout << "Enter your balance :" << '\n';
    std::cin >> acbal;
  }
  friend void frand(account);//friend function prototype && friend function accepts only objects as arguementsn
};
void frand(account b1){
  std::cout << "Account Number: "<<b1.acno<<" by name "<<b1.name<<" has balance of "<<b1.acbal<<" rupees"<<'\n';
}
int main(int argc, char const *argv[]) {
  account a1;
  a1.setAc();
  frand(a1);
  return 0;
}
