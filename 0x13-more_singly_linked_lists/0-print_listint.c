#include "lists.h"

/**
* print_listint - Prints all the elements of a list.
* @h: linked list.
* Return: Total number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
