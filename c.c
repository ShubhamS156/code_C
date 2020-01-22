#include<stdio.h>
#include<stdlib.h>
void display(char msg[]){
printf("msg is %d and size is %ld",*(msg+1),sizeof(msg));
}
//line 4  *(msg+1)  returns the  ascii value for the corresponding letter stored in the array.
int main(){
int *pointer;
int **pointer2=&pointer;
int x=5;
*pointer2=&x;
printf("%d\n",**pointer2);

char quote[]="Shubh";
printf("%s and  size of the string is %ld \n Fuction call:\n",quote,sizeof(quote));
display(quote);

long aliasPointer=(long)pointer;
printf("\n \n %ld \n %p",aliasPointer,pointer); 
return 0;
}
