#include <stdio.h>

/**
 * times_table - Prints the 9 times table.
 *
 * Return: 0.
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("9 * %d = %d\n", i, 9 * i);
	}
}
