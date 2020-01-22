#include<stdio.h>
int main(int argc, char const *argv[]) {
int a,b;

  while(scanf("%d %d",&a,&b)==2){
  if(a>10 && b<20){
    printf("%d %d\n",a,b);
  }
}
  return 0;
}
