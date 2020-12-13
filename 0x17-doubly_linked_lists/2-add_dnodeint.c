#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->n = n;
	node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (*head);
}
