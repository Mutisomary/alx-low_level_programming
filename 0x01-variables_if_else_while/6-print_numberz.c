#include <stdio.h>
/**
* main - Prints all single digit numbers of base 10.
*
* Return: 0 success.
*/

int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
