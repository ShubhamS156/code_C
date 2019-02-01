#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i=0,cha;
  int binary[10];
  printf("Enter a number\n" );
  scanf("%d",&cha );
  while(cha>=1){
  binary[i]=cha%2;
  cha=cha/2;
i+=1;
}
printf("%d\t",cha );
int j=i;
while (j>=0) {
  printf("%d",binary[j]);
  j-=1;
}
printf("\t" );
printf("%o\t",cha);
printf("%X",cha);

  return 0;
}
//binary working rest not
