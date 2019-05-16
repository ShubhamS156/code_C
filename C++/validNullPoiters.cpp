#include<iostream>

int main() {
	int num = 10;
	int *ptr = &num;


	if(ptr == NULL)
		printf("ptr: NULL\n");
	else
		printf("ptr: NOT NULL\n");

	ptr = 0;
	if(ptr == NULL)
		printf("ptr: NULL\n");
	else
		printf("ptr: NOT NULL\n");

	return 0;
}
