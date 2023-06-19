#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: Function parameter.
 * @accept: Function parameter.
 * Return: 0 (always success).
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				m++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
