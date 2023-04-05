#include "main.h"

int check_prime(int n, int j);

/**
* is_prime_number - Returns a prime number.
* @n: Value t be checked.
* Return: Prime number.
*/

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
* Check_prime - Checks if a number is prime.
* @n: Value to be checked.
* @j: Iteration.
* Return: prime number.
*/

int check_prime(int n, int j)
{
	if (n <= 1)
		return (0);
	if (n % j == 0 && j > 1)
		return (1);
	return (check_prime(n, j + 1));
}
