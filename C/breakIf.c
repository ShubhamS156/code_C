#include <stdio.h>
 int main(int argc, char const *argv[]) {
   int x=1;
if (x==1) {
  break;//error...break can't break out of if statements
  printf("Hey there fellas\n");
}

int y=3;
if(y=5){//sets y=5 and as C thinks of every non zero value as true the logic enters the of statement
  printf("lassan");
}
printf("%d",y);
  return 0;
}
