#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_nodeint_at_index - get the linked lists at index node.
 *@head: head of linked lists
 *@index: index of node
 *Return: linked lists
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
