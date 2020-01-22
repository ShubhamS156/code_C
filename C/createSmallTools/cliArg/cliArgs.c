#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,b;
  if(argc!=3){
    fprintf(stderr, "Need two arguements\n" );
    return 1;
  }

  FILE *in=fopen(argv[1],"r");
  FILE *out1=fopen(argv[2],"w");
  while (fscanf(in,"%d %d",&a,&b)==2) {
    fprintf(out1, "%d\n",a+b );
  }
  return 0;
}
