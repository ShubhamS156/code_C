#include <iostream>
#include "sphereVolume.h"
using namespace std;
int main(int argc, char const *argv[]) {
  int rad1;
  double rad2;
  std::cout << "Enter radius of sphere in int format" << '\n';
  std::cin >> rad1;
  std::cout << "Enter radius of sphere in decimal format" << '\n';
  std::cin >> rad2;
  std::cout << "Volume in ineger format is " <<sphereVolume(rad1)<< endl;

    std::cout << "Volume in double format is "<<sphereVolume(rad2) << endl;
    sphereVolume(rad2);
  return 0;
}
