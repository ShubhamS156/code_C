#include <iostream>
#include<string>
#include"gradeBook.h"
using namespace std;
int main(int argc, char const *argv[]) {
  Gradebook myGradeBook1("myGradeBook1 for CS101 intro to CSE");
  Gradebook myGradeBook2("myGradeBook2 for CS102 intro to DS");
  std::cout << myGradeBook1.getCourseName() << '\n';
  std::cout << myGradeBook2.getCourseName() << '\n';
  std::cout << "Change the object's copy of data member" << '\n';
  myGradeBook1.setCourseName("CSE");
  myGradeBook2.setCourseName("DS");
  std::cout << "Updated value for myGradeBook1 is "<<myGradeBook1.getCourseName()<< '\n';
  std::cout << "Updated value for myGradeBook2 is "<<myGradeBook2.getCourseName()<< '\n';
  return 0;
}
