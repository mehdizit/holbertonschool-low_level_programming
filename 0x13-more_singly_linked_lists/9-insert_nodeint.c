#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *insert_nodeint_at_index - insert node at given index idx.
 *@head: head of linked lists
 *@idx: the position of node that we will insert new_node.
 *@n: new data of node to be inserted
 *Return: new linked lists.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
