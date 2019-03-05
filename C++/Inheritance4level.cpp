#include <iostream>
using namespace std;
class A{
public:
void setNumber(int a,int b){
    num1=a;
    num2=b;
  }
  int num1,num2;
  int mul;
  int fact1=1;
  int fact2=1;
  float div1;
  float div2;
  float factdiv;

};
class B:public A{
public:
  int factorial1(){
    for(int i=num1;i>=1;i--){
      fact1=fact1*i;
    }
    return fact1;
  }
  int factorial2(){
    for(int i=num2;i>=1;i--){
      fact2=fact2*i;
    }
    return fact2;
  }
};
class C:public B{
public:
  float division1(){
    div1=float(num1)/num2;
    return div1;
  }
  float division2(){
    div2=float(num2)/num1;
    return div2;
  }
  };
  class D:public C{
  public:
    int multiply(){
      mul=num1*num2;
return mul;
    }
    float factorialDivision(){
      factdiv=float(fact2)/fact1;
      return factdiv;
    }
  };
  int main(int argc, char const *argv[]) {
    int c,d,e,f;
    std::cout << "Enter 2 numbers " << '\n';
    std::cin >> c>>d;
    D obj1;
    obj1.setNumber(c,d);
    std::cout << "Numbers recieved... " << '\n';
    std::cout << "Calculating factorial..." << '\n';
    std::cout << "Factorials of both number Calculated" <<'\n';
    std::cout << "Press 1 for displaying factorial of "<<c<<" and press 2 for displaying factorial of "<<d<<'\n';
    std::cin >> e;
    if(e==1){
      std::cout << "Factorial of " <<c<<" is "<<obj1.factorial1()<<'\n';
    }
    else if(e==2){
      std::cout << "Factorial of " <<d<<" is "<<obj1.factorial2()<<'\n';
    }
    std::cout << "Calculating divisions..." << '\n';
    std::cout << "Calculated divisions..." << '\n';
    std::cout << "Press 1 for displaying "<<c<<"/"<<d<<" and press 2 for displaying "<<d<<"/"<<c<<'\n';
   std::cin >> e;
    if(e==1){
      std::cout <<c<<"/"<<d<<" is "<<obj1.division1()<< '\n';
    }
    else if(e==2){
      std::cout <<d<<"/"<<c<<" is "<<obj1.division2()<< '\n';
    }
std::cout << "Multiplications calculating..." << '\n';
std::cout << "Multiplications calculated..." << '\n';
std::cout << "calculating factorial divisions..." << '\n';
std::cout << "calaculated factorial divisions..." << '\n';
std::cout << "Multiplication of "<<c<<" and "<<d <<" is "<<obj1.multiply()<<'\n';
std::cout << "Division of factorials is "<<obj1.factorialDivision() << '\n';
    return 0;
  }
