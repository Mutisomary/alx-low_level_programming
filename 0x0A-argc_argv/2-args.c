#include <stdio.h>
#include "main.h"

/**
* main - program that prints all arguments it receives.
* @argc: arguments.
* @argv: vector.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
