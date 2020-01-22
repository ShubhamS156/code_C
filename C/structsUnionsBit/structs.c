#include<stdio.h>
int main(int argc, char const *argv[]) {
  struct fish{
    const char * name;
    int age;
  };
  struct fish2{
    const char  *naam;
    int umar;
  };
  struct fish jelly={"JellyO",20};
  struct fish belly=jelly; // cannot assign fish to fish2
  printf("FishName: %p\n",jelly.name );
  printf("Fish2aam: %p\n",belly.name );
  belly.name="shubham";
const  char * addr=belly.name;
  printf("%p\n", addr);
  jelly.name=addr;

printf("FishName: %p\n",jelly.name );
  printf("Fish2Naam: %p\n",belly.name );

  return 0;
}
