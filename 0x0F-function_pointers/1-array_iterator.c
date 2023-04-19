#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter.
 * @array: array
 * @size: elements to be printed.
 * @action: pointer to print in regular or hex
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
