#include<stdio.h>
#include<string.h>

char track[][2]={
"a",
"b",
"c",
"d"
};
void search_for(char  query[]){
int counter=0;
for(int i=0;i<4;i++){
printf("dummy");
if(strstr(track[i],query)){
printf("Found query %s in track %d: %s",query,i,track[i]);
counter++;
}
}
if(counter==0)
 printf("No results");
}

int main(){
char query[80];
printf("Enter a song to find:\n ");
fgets(query,80,stdin);
search_for(query);
return 0;
}

