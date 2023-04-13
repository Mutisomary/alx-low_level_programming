#include <stdio.h>
#include "main.h"

/**
* main - Program that prints its name.
* @argc: arguments.
* @argv: vector.
* Return: 0.
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}


