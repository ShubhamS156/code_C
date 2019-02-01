#include<stdio.h>
int main(int argc, char const *argv[]) {
  int i,j,k;

  for ( i = 1; i <= 5; ++i ) {
  for ( j = 1; j <= 3; ++j ) {
  for ( k = 1; k <= 4; ++k )
  printf( "%s", "*" );
  puts( "" );
  }
  puts( "" );
  }
  return 0;
}
