#include "main.h"

/**
* positive_or_negative - Determine if a number is positive, negative or zero.
*
* @i: Parameter to be checked.
* Return: 0.
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
	printf("%d is negative\n", i);
	}
}
