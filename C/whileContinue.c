#include <stdio.h>
int main(int argc, char const *argv[]) {
  int x=1;
  while (x<=1) {
    printf("hello\n");
    continue;
    x=x+1;

  }
  printf("%d\n",x );
  return 0;
}
//giving an inifnte loop
