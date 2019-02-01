#include<stdio.h>
int main(int argc, char const *argv[]) {
double x,y,z,val;
  printf("\tPythagorean Triplets using Brute Force\n");
  printf("Side 1\tSide 2\tHypotenuse" );
  for(int i=1;i<=700;i++){
    for(int j=1;j<=700;j++){
      for(int k=1;k<=700;k++){
        val=j*j+i*i;
        if(k*k==val){
          printf("%.1d\t%.1d\t%d\n",i,j,k );
        }
      }
    }
  }
  return 0;
}
//as we increase the number starting value starts to disappear and are not printed.Whyy???
