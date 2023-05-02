#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of the list.
* @head: pointer to the first node.
* @n: data to insert.
* Return: Address of the new element.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newnode;
	return (newnode);
}
