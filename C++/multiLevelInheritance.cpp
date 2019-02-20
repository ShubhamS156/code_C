#include<iostream>
using namespace std;
class student{
public:
  void setMarks(){
    std::cout << "function of parent class STUDENT called" << '\n';
    std::cout << "Enter marks in English: " << '\n';
    std::cin >> mEng;
    std::cout << "Enter marks in Maths: " << '\n';
    std::cin >> mMaths;
    std::cout << "Enter marks in Physics: " << '\n';
    std::cin >> mPhy;
    std::cout << "Enter marks in OOPS: " << '\n';
    std::cin >> mOops;
  }
  void getMarks(){
    std::cout << "funciton of parent class STUDENT called" << '\n';
    std::cout<<mEng<<" "<<mMaths<<" "<<mPhy<<" "<<mOops<<'\n';
  }

  int mEng;
  int mMaths;
  int mPhy;
  int mOops;
};
class marks:public student{
public:
  void setMarks() {
student::setMarks();
    std::cout << "function of derived class MARKS called" << '\n';
    std::cout << "Enter marks in Englishh: " << '\n';
    std::cin >> mEng;
    std::cout << "Enter marks in Mathss: " << '\n';
    std::cin >> mMaths;
    std::cout << "Enter marks in Physicss: " << '\n';
    std::cin >> mPhy;
    std::cout << "Enter marks in OOPSS: " << '\n';
    std::cin >> mOops;
  }
void getMarks(){
student::getMarks();
    std::cout << "funciton of derived class MARKS called" << '\n';
      std::cout<<mEng<<" "<<mMaths<<" "<<mPhy<<" "<<mOops<<'\n';
  }
};
int main(int argc, char const *argv[]) {
  marks m1;
  m1.setMarks();
  std::cout<< "Marks are: " << '\n';
  m1.getMarks();
  return 0;
}
