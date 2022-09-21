#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer
 * @src: pointer to the source string.
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
