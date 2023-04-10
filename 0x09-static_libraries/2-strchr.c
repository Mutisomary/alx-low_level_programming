#include "main.h"

/**
 * _strchr - Function that locates a character in a string.
 * @s: Pointer of the string.
 * @c: Character to be located.
 * Return: s or Null.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
