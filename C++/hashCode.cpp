#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
using namespace std;
class Input{
public:
 void getNumofPhotos(){
  std::cin >> N;
 }
 void rotation(){
std::cin >> orientation
;
}
 void numOfTags(){
std::cin >> tags;
 }
 void showN(){
  std::cout <<N<< '\n';
 }
 unsigned int N;
 unsigned int tags;
 char orientation;
};
int main(int argc, char const *argv[]) {
  Input i1;
i1.getNumofPhotos();
i1.rotation();
i1.numOfTags();
string tagArray[100000][100];
string solutionArray[100000][10];
int idArray[100000];
int tag1,tag2,tagCom;
int counter=0;
for(int k=0;k<100000;k++){
for(int i=0;i<100;i++){
    std::cin >> tagArray[k][i];
 }
 idArray[k]=k;
}
for(int i=0;i<100000;i++){
  for(int k=0;k<10;k++){
  for(int j=0;j<10;j++){
    if(tagArray[i][k]==tagArray[i+1][j]){
      tagCom++;
  }
 }
}
if(tagCom==3){
tagArray[i]=solutionArray[counter];
tagArray[i+1]=solutionArray[counter+1];
counter++;
}
}

for(int i=0;i<100000;i++){
  std::cout << solutionArray[i] << '\n';
}


  return 0;
}
