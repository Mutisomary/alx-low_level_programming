#include "main.h"

/**
* print_line - Prints straight line.
*
* @n: Parameter to be checked.
* Return: 0.
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
