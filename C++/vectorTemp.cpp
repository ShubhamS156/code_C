#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <vector>
using namespace std;
void vectorOut(const vector<int> &);//function prototype
void vectorIn(vector<int> &);
int main(int argc, char const *argv[]) {
  vector<int> integers1(7); //space between <int> and integers1 is not an issue
  vector<int> integers2(10);
  //vector initialisation
  std::cout << "After initialisation vector integers1 is :\n" ;
  vectorOut(integers1);
  std::cout <<'\n' <<'\n';
  std::cout << "Size of integers1 is"<<integers1.size() << '\n';
  std::cout << "After initialisation vector integers2 is :" << '\n';
  vectorOut(integers2);
  std::cout <<'\n' <<'\n';
  std::cout << "Size of integers2 is"<<integers2.size() << '\n';
  std::cout << "Input integers to store in vector integers1" << '\n';
  vectorIn(integers1);
  std::cout << "Input integers for vector integers2" << '\n';
  vectorIn(integers2);
  //passing vector integers1 and integers2 as arguement to function vectorIn for taking Input
  std::cout << "After input vector integers1 is :" << '\n';
  vectorOut(integers1);
  std::cout << "After input vector integers2 is :" << '\n';
  vectorOut(integers2);
  //demonstrating user-input in vectors integers1 and integers2
  if (integers1!=integers2) {
    std::cout << "Vector integers1 and integers2 are not equal" << '\n';
  }
  //demonstrating equality test for vectors integers1 and integers2
  vector<int> integers3(integers1);
  //initialisation of vector integers3 with the content of integers1 using copy constructor
  std::cout << "Size of integers3 is: " ;
  std::cout<<integers3.size();
  cout<<'\n';
  vectorOut(integers3);
  //why integers3 is shown as a function????
  cout<<"Assigning integers2 to integers1"<<'\n';
  integers1=integers2;
  if (integers1==integers2) {
    std::cout << "integers1 and integer2 are equal" << '\n';
  }
  //demonstrating vectors can be used as lvaue and rvalue also
  std::cout << "Printing integers1[5]:" << '\n';
  std::cout << integers1[5] << '\n';
  //using square brackets tp create rvalues;
  std::cout << "Assigning 1000 to integers1[5]" << '\n';
  integers1[5]=1000;
  vectorOut(integers1);
  //using square brackets to create lvalues
  try{
    std::cout << "Attempting to display integers1.at(15)" << '\n';
    std::cout << integers1.at(15) << '\n';
  }
  catch(out_of_range &ex){
    std::cout << "An exception occured :" << '\n';
    std::cout << ex.what() << '\n';
  }
  return 0;
}
void vectorOut(const vector<int> &array) {
  size_t i;
  for(i=0;i<array.size();i++){
    std::cout <<setw(10)<< array[i] << '\n';
    if((i+1)%4==0){
      std::cout << '\n';
    }

  }
}
void vectorIn(vector<int> &array) {
  for(size_t i=0;i<array.size();i++){
    std::cin >>array[i] ;
  }
}
