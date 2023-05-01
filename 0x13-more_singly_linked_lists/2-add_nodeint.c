#include "lists.h"

/**
* add_nodeint - Add new node at the beggining of the list.
* @head: pointer of the first node.
* @n: data to insert.
* Return: Address of the new element.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (!first)
		return (NULL);
	first->n = n;
	first->next = *head;
	*head = first;

	return (first);
}

