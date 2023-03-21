#include <stdio.h>
/**
* main - Prints alphabets in lowercase and then uppercase.
*
* Return: 0 success.
*/

int main(void)
{
	char c = 'a';
	char d = 'A';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
