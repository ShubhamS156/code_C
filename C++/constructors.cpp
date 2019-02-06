#include<string>
#include<iostream>
using namespace std;
class Gradebook{
public:
  Gradebook(string name){
    setCourseName(name);
  }
  void setCourseName(string name){
    courseName=name;
  }
  string getCourseName(){
    return courseName;
  }
private:
  void displayMessage(){
    std::cout << "The coursename is"  <<getCourseName()<< '\n'; //in general function getCourseName is called...
  }
  string courseName;
};
int main(int argc, char const *argv[]) {
  Gradebook myGradeBook1("CS101 Intro to Computer Science");
  Gradebook myGradeBook2("CS102 Data Structures");
  std::cout << "myGradeBook1 created for course" <<myGradeBook1.getCourseName()<< '\n';//myGradeBook1 object calls the function for itself and the function returns the courseName initialised for the object
  std::cout << "myGradeBook2 created for course" <<myGradeBook2.getCourseName()<< '\n';
  return 0;
}
