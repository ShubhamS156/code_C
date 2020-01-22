#include <stdio.h>
#include "encrypt.h"
int main(int argc, char const *argv[]) {
  char message[8]="shubham";
msg(message);
printf("%s\n",message );
int x;
printf("Enter 1 to decrypt \n" );
scanf("%d",&x);
if(x==1){
  msg(message);
  printf("%s\n", message);
}
else printf("You are noob\n" );
  return 0;
}
