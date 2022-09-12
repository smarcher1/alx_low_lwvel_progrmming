#include <stdio.h>
/**
  * main - computes sizes of various data types
  *
  *Return: zero
  */
int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of   char:%lu bytes\n", sizeof(c));
	printf("Size of int:%lu bytes\n", sizeof(i));
	printf("Size of  long int:%lu bytes\n", sizeof(long int));
	printf("Size of long  long int:%lu bytes\n", sizeof(long long int));
	printf("Size of float: %lu bytes\n", sizeof(f));
return (0);
}
