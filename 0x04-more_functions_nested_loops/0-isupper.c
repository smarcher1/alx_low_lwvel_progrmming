#include "main.h"
/**
 *_isupper - function to check if c is a letter, lowercase or uppercase
 *@c: is the int that fill  argument of the function
 * Return: 0
 */

int _isupper(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
