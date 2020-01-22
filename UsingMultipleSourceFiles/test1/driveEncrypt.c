#include <stdio.h>
#include"encryption.h"
int main(int argc, char const *argv[]) {
char *message;
int in;
FILE *input=fopen("in.txt","r");
FILE *output=fopen("out.txt","w");
  fprintf(input,"Enter a string\n");
  fscanf(input,"%s",message);
  printf("%s",message);
  printf("Enter 1 to encrypt\n" );
  scanf("%d",&in );
  if(in==1){
    msg(message);
  }
  fprintf(output,"Encrypted string is\n");
  fprintf(output,"%s\n", message);

  printf("Presss 2 to decrypt\n" );
  scanf("%d",&in );
  if(in==2){
    msg(message);
printf("%s\n",message );
  }
  else{
    printf("GALAT INPUT\n"  );
  }

  return 0;
}
