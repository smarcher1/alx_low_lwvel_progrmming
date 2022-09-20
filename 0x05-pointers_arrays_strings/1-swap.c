#include "main.h"

/**
 * swap_int - swappings  two integers values
 * @a: first integer value
 * @b: secong integer value
 * Return: nothing
 */

void swap_int (int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
