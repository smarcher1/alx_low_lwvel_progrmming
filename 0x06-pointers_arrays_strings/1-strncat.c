#include "main.h"

/**
 *_strncat - concatenates two strings.
 *
 * @dest: resulting string.
 * @src: source string.
 * @n: string length.
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_lens = 0;

	while (dest[index++])
		dest_lens++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_lens++] = src[index];
	return (dest);
}
