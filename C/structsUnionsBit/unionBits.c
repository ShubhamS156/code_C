#include<stdio.h>

union tagname
{
	unsigned int a;
	unsigned char s[4];
};

union tagname object;

int main()
{
	char i; //for loop counter

	//assign an integer number
	object.a=0xABCD;

	printf("Integer number: %ld, hex: %X\n",object.a,object.a);

	printf("Indivisual bytes: ");
	for(i=3;i>=0;i--)
		printf("%X ",object.s[i]);

	printf("\n");
	return 0;
}
