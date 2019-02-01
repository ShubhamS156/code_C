#include<stdio.h>
int main(){
/*  int x=1;
  while(x<=20){
    printf("%d",x);
    if(x%5==0){
      printf("\n");
    }
    else {
      printf("\t");
  }
  x=x+1;
} using while loop*/

for(int x=1;x<=25;x++){
  printf("%d",x);
  if(x%5==0){
    printf("\n");
  }
  else {
    printf("\t");
}
}
//using for loop
  return 0;
}
