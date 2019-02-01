#include<stdio.h>
int  main(int argc, char const *argv[]) {
  int a=0;
  int b=0;
  int c=0;
  char grade;
  printf("Grade\t");
  printf("Counter\n" );
  scanf("%c",&grade);
  while(grade!=EOF)
 {
    switch (grade) {
      case 'a': ++a;
      break;
      case 'b': ++b;
      break;
      case 'c':++c;
      break;
      default: printf("Enter correct grade\n");
    }
  }
if (grade=EOF) {
  printf("END....displaying result\n" );

  printf("a\t" );
  printf("%d\n",a );

  printf("b\t" );
  printf("%d\n",b );

  printf("c\t" );
  printf("%d\n",c );}
  return 0;
}
