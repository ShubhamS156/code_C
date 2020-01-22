#include<stdio.h>
#include<string.h>

int main(){
char track[][10]={
"hello",
"world"
};

if(strstr(track,"hello")){
printf("found");
}
return 0;
}
