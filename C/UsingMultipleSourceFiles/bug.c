#include <stdio.h>

void msg(char *msg){
while ( msg) {
  printf("%s\n",msg );
msg++;
}
}
int main(int argc, char const *argv[]) {
  char message[8]="shubham";
msg(message);

  return 0;
}
