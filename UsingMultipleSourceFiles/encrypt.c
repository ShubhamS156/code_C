#include <stdio.h>

void msg(char *msg){

while (*msg) {
  *msg= *msg ^31;
msg++;
}
}
