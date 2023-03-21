#include <stdio.h>
/**
* main - Prints alphabet in lowercase except q and e.
*
* Return: 0 success.
*/

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
