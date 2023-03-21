#include <stdio.h>
/**
* main - Prints all posiible combinations of singel digit numbers.
*
* Return: 0 success.
*/

int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
