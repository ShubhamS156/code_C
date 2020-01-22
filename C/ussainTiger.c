#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  int tigerAcceleration,finish,distancetoBolt,test,boltSpeed;
  double timeByTiger,timeByBolt;
scanf("%d",&test );
while (test--) {
  scanf("%d %d %d %d", &finish,&distancetoBolt,&tigerAcceleration,&boltSpeed);
  double timeT=(2*(distancetoBolt+finish))/tigerAcceleration;
  timeByTiger=sqrt(timeT);
  timeByBolt=finish/boltSpeed;
  if (timeByBolt>timeByTiger) {
    printf("Bolt\n" );
  }
  else
  printf("Tiger\n" );
}
  return 0;
}
