#include "main.h"

/**
 * _strncpy - Function that copies a string.
 *
 * @dest: The buffer storing the copied string.
 * @src: The source string.
 * @n: Maximum number of bytes to be copied.
 * Return: The copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
		srclen++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = srclen; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
