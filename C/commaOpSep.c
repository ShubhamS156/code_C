#include<stdio.h>
int main(int argc, char const *argv[]) {
  int a=1,b=2,c=3,d=0;
  int i=(a,b)//sets i to b=2
int i=a,b;//gives a redeclaration error because after setting i to a=2 it again declares a variable b of int datatype
return 0;
}
