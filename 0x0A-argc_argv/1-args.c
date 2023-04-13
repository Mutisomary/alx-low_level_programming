#include <stdio.h>
#include "main.h"

/**
* main - Function prints the number of arguments.
* @argc: arguments.
* @argv: vector.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
