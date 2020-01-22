#include<stdio.h>
int func(int lon){
int a=lon;
return a;
}
int main()
{
func(3);
int x=func(3);
printf("%d",x);
}
