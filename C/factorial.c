#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i,fact;
  int val=1;
   printf("Enter number to find factorial of\n" );
  scanf("%d",&fact );
  for(i=fact;i>=1;i--){
  val=val*i;
  }
  printf("%d! is %d\n",fact,val );
  return 0;
}
//factorial of numbers above 16 gets out of range of int datatype and garbage value is printed.
