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

	printf("Size of   char:%lu byte(s)\n", sizeof(c));
	printf("Size of int:%lu byte(s)\n", sizeof(i));
	printf("Size of  long int:%lu byte(s)\n", sizeof(long int));
	printf("Size of long long int:%lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(f));
return (0);
}
