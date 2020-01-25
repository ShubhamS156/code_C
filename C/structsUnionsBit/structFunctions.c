#include<stdio.h>

typedef struct {
  int num1;
  int num2;
}firstS;

firstS inputS;

void DisplaySum(firstS Input){
  printf("\nSum is: %d\n",Input.num1+Input.num2 );
}
firstS StructSet(){
  printf("Enter first Number\n" );
  scanf("%d",&inputS.num1 );
  printf("Enter second Number\n" );
  scanf("%d",&inputS.num2 );
  return inputS;
}
int main(int argc, char const *argv[]) {
  DisplaySum(StructSet());
  sizeof()
  return 0;
}
