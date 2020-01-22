#include <stdio.h>
typedef struct{
  int age;
  char name[8];
}details;
int main(int argc, char const *argv[]) {
  details det1={10,"shubham"};
  details * det;
  det=&det1;
  printf("%d and %s\n",(*det).age,(det->name) );
  char array[1]="s";
  printf("%p\n",array );
  return 0;
}
