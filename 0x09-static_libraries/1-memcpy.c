#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 * @dest: destination value.
 * @src: source.
 * @n: Function parameter.
 * Return: Dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
