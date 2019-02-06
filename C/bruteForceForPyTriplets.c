#include<stdio.h>
int main(int argc, char const *argv[]) {
double x,y,z,val;
int n;
printf("Enter a number\n");
scanf("%d",&n);
  printf("\tPythagorean Triplets using Brute Force\n");
  printf("Side 1\tSide 2\tHypotenuse\n" );
  for(int i=1;i<=500;i++){
    for(int j=1;j<=500;j++){
      for(int k=1;k<=500;k++){
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
