#include<stdio.h>
#include<stdlib.h>
typedef struct island {
  char *name;
  char * time;
  struct island *next;
}island;

island * create(char *name){
  island *i=malloc(sizeof(island));
  i->name=name;
  i->time="10Oclock";
  i->next=NULL;
  return i;
}

void display(struct island * i) {
  struct island * j=i;
  for(;j!=NULL;j=j->next){
    printf("Name:%s Time:%s\n",j->name,j->time );
  }
}
int main(int argc, char const *argv[]) {
  char name[80];
  printf("Enter name of the first island\n" );
  fgets(name,80,stdin);
  island *island1=create(name);
  char name1[80];
  printf("Enter name of the second island\n" );
  fgets(name1,80,stdin);
  island *island2=create(name1);
  island1->next=island2;

  display(island1);
  return 0;
}
/*if only one array is used to pass the island names in main function then both the island stores the second
name because they're both pointing to the arrays location and the second time when the array gets updated the
first island's name also changes*/
