#include <stdio.h>

/**
* main - Prints numbers of base 16 in lowercase.
*
* Return: 0.
*/

int main(void)
{
	int c = '0';
	char l = 'a';

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}


