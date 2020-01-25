#include<stdio.h>

struct island {
  char *name;
  char * time;
  struct island *next;
  int a;
  int b;
}island;

void display(struct island *in){
   struct island *i=in;
  for(;i!=NULL;i=i->next){
    printf("Name: %s Time: %s size: %ld\n",i->name,i->time,sizeof(island) );
  }
}
int main(int argc, char const *argv[]) {

struct island land1={"skull","2 hours",NULL,3,2};
struct island land2={"craig","3 hours",NULL,2,3};
struct island land3={"panama","4 hours",NULL,5,6};
land1.next=&land2;
land2.next=&land3;

display(&land1);

  return 0;
}
