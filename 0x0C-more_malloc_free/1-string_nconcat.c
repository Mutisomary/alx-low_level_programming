#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - function that concatenates two strings.
* @s1: string 1.
* @s2: string 2.
* @n: number of bytes from s2 to concatenate to s1
* Return: pointer to the resulting string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, m = 0, p = 0;

	while (s1 && s1[m])
		m++;
	while (s2 && s2[p])
		p++;
	if (n < p)
		s = malloc(sizeof(char) * (m + n + 1));
	else
		s = malloc(sizeof(char) * (m + p + 1));
	if (!s)
		return (NULL);
	while (i < m)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < p && i < (m + n))
		s[i++] = s2[j++];
	while (n >= p && i < (m + p))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
	}
