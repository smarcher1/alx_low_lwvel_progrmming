#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - to print the last digit of a number
 *
 *Return:last digit
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n % 10  > 5)
	{
		printf("Last digit of %d is  %d is greater than 5\n", n % 10);
	} else if (n % 10 == 0)
	{
		printf("%d is zero\n", n % 10);
	} else if (n % 10 < 6 && n != 0)
	{
		printf("%d is lesser than 6 and not equal 0\n", n % 10);
	}
return (0);
}
