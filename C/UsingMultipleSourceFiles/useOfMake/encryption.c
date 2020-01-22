#include <stdio.h>

   void msg(char *message){
     while(*message){
       *message=*message ^ 31;
    message++;
     }
   }
