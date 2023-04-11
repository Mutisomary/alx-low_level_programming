#include "main.h"
#include <stdlib.h>

/**
* _strdup - Function returns a pointer containing copy of a string.
* @str: The pointer.
* Return: a.
*/

char *_strdup(char *str)
{
	char *a;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		a[j] = str[j];
	return (a);
}
