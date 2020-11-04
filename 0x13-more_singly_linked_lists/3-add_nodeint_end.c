#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_nodeint_end - add node at the ende of linked lists.
 *@head: head linked lists.
 *@n: data integer of node.
 *Return: new linked lists.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	if (!head || !new_node)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	tmp = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	}
	return (*head);
}
