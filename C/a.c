#include<stdio.h>

int main(int argc, char const *argv[]) {
  int arr[1]={5};
  int *p=arr;
int *b=p;
int *c=p;
*p=10;
printf("%d\n",*b );
printf("%d\n",*c );
  return 0;
}
