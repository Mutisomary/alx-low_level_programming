#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int n = 50; /* Number of Fibonacci numbers to print */
	long long int first = 1, second = 2, next;

	printf("The first %d Fibonacci numbers are:\n", n);

	/* Print the first two Fibonacci numbers */
	printf("%lld, %lld", first, second);

	/* Generate and print the remaining Fibonacci numbers */
	for (int i = 2; i < n; i++)
	{
		next = first + second;
		printf(", %lld", next);
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}

