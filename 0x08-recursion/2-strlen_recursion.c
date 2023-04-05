#include "main.h"

/**
* _strlen_recursion - Function returns the length of the string.
* @s: Pointer of the string.
* Return: Length of the string.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
