#include<iostream>
#include<string>
using namespace std;
class Gradebook{
public:
  Gradebook(string name){
    courseName=name;
  }
void setCourseName(string name){
  courseName=name;
}
string getCourseName(){
  return courseName;
}
void displayMessage(){
  std::cout << getCourseName() << '\n';//which copy of function is this?
}
private:
  string courseName;
};
