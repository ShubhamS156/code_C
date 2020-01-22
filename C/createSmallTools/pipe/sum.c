#include<stdio.h>
int main(int argc, char const *argv[]) {

  int a,b,sum;
  while(scanf("%d %d\n",&a,&b)==2){
    sum=a+b;
    printf("Sum is: %d\n",a+b);
  }
  return 0;
}
