#include "main.h"
#include <stdio.h>

/**
* main - Entry point.
*
* Description: prints the numbers 1 to 100 w/
* Fizz for mutiples of 3, Buzz for mutiples of 5,
* and FizzBuzz for mutiples of both.
* Return: 0.
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FIzzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

