#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* main - program that adds positive numbers.
* @argc: arguments.
* @argv: vector.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int j;
	unsigned int l, sum = 0;
	char *d;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			d = argv[j];
		for (l = 0; l < strlen(d); l++)
		{
			if (d[l] < 48 || d[l] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(d);
		d++;
	}
	printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
