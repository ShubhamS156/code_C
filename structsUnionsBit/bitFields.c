#include <stdio.h>
int main(int argc, char const *argv[]) {
  typedef struct{
    unsigned int start:1;
    unsigned int stop:1;
    unsigned int parity:1;
  }ashu;
  ashu as={1,1,1};

  printf("%d\n%d\n%d",as.start,as.stop,as.parity );
  return 0;
}
