#include "main.h"

/**
* _strlen_recursion - Programs returns the length of the string.
* @s: The string.
* Return: Length of the string.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
* comparator - compares each character of the string.
* @s: The string.
* @j1: smallest iterator.
* @j2: biggest iterator.
* Return: 0.
*/
int comparator(char *s, int j1, int j2)
{
	if (*(s + j1) == *(s + j2))
	{
		if (j1 == j2 || j1 == j2 + 1)
			return (1);
		return (0 + comparator(s, j1 + 1, j2 - 1));
	}
	return (0);
}


/**
* is_palindrome - Function checks if a string is a palindrome.
* @s: pointer of the string to be checked.
* Return: 1 if a palindrome or 0 if otherwise.
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
