#include "main.h"

/**
* print_array - Print the elements of an array.
*
* @a: Function parameter.
* @n: Function parameter.
*
* Return: 0.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
