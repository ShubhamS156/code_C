// Counting letter grades with switch.
#include <stdio.h>
// function main begins program execution
int main( void )
{
int grade; // one grade
unsigned int aCount = 0; // number of As
unsigned int bCount = 0; // number of Bs
unsigned int cCount = 0; // number of Cs
unsigned int dCount = 0; // number of Ds
unsigned int fCount = 0; // number of Fs
puts( "Enter the letter grades." );
puts( "Enter the EOF character to end input."
);
// loop until user types end-of-file key sequence
while ( ( grade = getchar() ) != EOF ) {
// determine which grade was input
switch ( grade ) { // switch nested in while
case 'A': //
case 'a': //
++aCount;
break; // grade was uppercase A
or lowercase a
// increment aCount
necessary to exit switch
case 'B': //
case 'b': //
++bCount;
break; // grade was uppercase B
or lowercase b
// increment bCount
exit switch
case 'C': //
case 'c': //
++cCount;
break; // grade was uppercase C
or lowercase c
// increment cCount
exit switch
case 'D': //
case 'd': //
++dCount;
break; // grade was uppercase D
or lowercase d
// increment dCount
exit switch
case 'F': //
case 'f': //
++fCount;
break; // grade was uppercas switch
case '\n': // ignore newlines,
case '\t': // tabs,
case ' ': // and spaces in input
break; // exit switch
default: // catch all other characters
printf( "%s", "Incorrect letter grade entered." );
puts( " Enter a new grade." );
break; // optional; will exit switch anyway
} // end switch
} // end while
// output summary of results
puts( "\nTotals for each letter
printf( "A: %u\n", aCount ); //
printf( "B: %u\n", bCount ); //
printf( "C: %u\n", cCount ); //
printf( "D: %u\n", dCount ); //
printf( "F: %u\n", fCount ); //
} // end function main
