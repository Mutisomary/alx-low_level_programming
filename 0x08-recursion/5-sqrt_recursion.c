#include "main.h"

int _sqrt(int n, int j);

/**
* _sqrt_recursion - Function that returns the natural square root of a number.
* @n: Function parameter.
* Return: Natural square root.
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - Recuses to find the square rooot of a natural number.
* @n: Function parameter.
* @j: iterator.
* Return: Natural square root.
*/

int _sqrt(int n, int j)
{
	int sqrt = j * j;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (j);
	return (_sqrt(n, j + 1));
}
