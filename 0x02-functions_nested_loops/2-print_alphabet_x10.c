#include "main.h"

/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
*
* Return:void
*/

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = '1';

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}



}
