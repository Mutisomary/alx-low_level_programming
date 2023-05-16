#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fibonacci[50];
	int i;

	/* Initialize the first two Fibonacci numbers */
	fibonacci[0] = 1;
	fibonacci[1] = 2;

	/* Calculate the remaining Fibonacci numbers */
	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	/* Print the Fibonacci numbers */
	for (i = 0; i < 49; i++)
	{
		printf("%d, ", fibonacci[i]);
	}
	printf("%d\n", fibonacci[49]);

	return (0);
}

