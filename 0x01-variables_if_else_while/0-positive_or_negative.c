#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine if a random number is positive, negative or zero
 *
 * Return: 0 always success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positive", \n);
	}
	else if (n == 0)
	{
		printf("n is zero", \n);
	}
	else if (n < 0)
	{
		printf("n is negative", \n);
	}
	return (0);
}
