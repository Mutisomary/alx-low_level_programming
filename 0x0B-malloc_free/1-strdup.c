#include "main.h"
#include <stdlib.h>

/**
* _strdup - Function returns a pointer containing copy of a string.
* @str: The pointer.
* Return: pointer.
*/

char *_strdup(char *str)
{
	char *bbb;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	bbb = malloc(sizeof(char) * (i + 1));
	if (bbb == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		bbb[j] = str[j];
	return (bbb);
}
