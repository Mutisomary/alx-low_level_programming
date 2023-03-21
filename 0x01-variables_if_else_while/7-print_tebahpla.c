#include <stdio.h>
/**
* main - prints lowercase alphabet in reverse order.
*
* Return: 0 success.
*/

int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
