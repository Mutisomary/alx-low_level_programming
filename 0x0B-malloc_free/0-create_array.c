#include "main.h"
#include <stdlib.h>

/**
* create_array - Function that creates an array of chars.
* @c: Char to assign
* @size: size of array.
* Return: Pointer to the array, NULL if it fails.
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int j;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		s[j] = c;
	return (s);
}
