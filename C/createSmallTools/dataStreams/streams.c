#include <stdio.h>

int main(int argc, char const *argv[]) {
  FILE *out1=fopen("out1.txt","w");
  FILE *out2=fopen("out2.txt","w");
  FILE *in1=fopen("in1.txt","r");
int a,b,sum;
  while (fscanf(in1,"%d %d",&a,&b)==2) {
sum=a+b;
if(sum>50)
    fprintf(out1, "Sum is: %d\n",sum );

else
    fprintf(out2, "Sum is: %d\n",sum );
}
  return 0;
  }
