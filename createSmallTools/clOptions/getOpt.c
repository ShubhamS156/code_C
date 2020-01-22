#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int opt;
int numi;
char numc,tf;
int tflag=0;
while ((opt=getopt(argc,argv,"t:a:"))!=-1) {
  switch (opt) {
case 't': tflag++;
 tf=*optarg;
break;
    case 'a':
    numi=*optarg;
    numc=*optarg;
    break;
    default:
    printf("Invalid args\n" );
  }
}
printf("%d and %c andd %c and %d\n",numi,numc,tf,tflag );
printf("argv:%s and argc:%d and optind:%d\n",argv[optind],argc,optopt );


    return 0;
}
