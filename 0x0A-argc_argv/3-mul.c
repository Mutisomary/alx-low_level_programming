#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that multiplies two numbers.
* @argc: arguments.
* @argv: vector.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int m1 = 0, m2 = 0;

	if (argc == 3)
	{
		m1 = atoi(argv[1]);
		m2 = atoi(argv[2]);
		printf("%d\n", m1 * m2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
