#include <stdio.h>
int main(int argc, char const *argv[]) {
  typedef union{
    float lemon;
    int lime;
  }lemon_lime;

  typedef struct{
    float tequila;
    float con;
    lemon_lime citrus;
  }margarita;

  margarita m={2.0,1.0,{.lime=2}};
  printf("%d\n",m.citrus.lime );
  return 0;
}
