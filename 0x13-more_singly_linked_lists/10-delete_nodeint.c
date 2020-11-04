#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *delete_nodeint_at_index - delete node at given position
 *@head: head linked lists
 *@index: position that to delete node
 *Return: 1 if succes or (-1) if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *previous = *head;

	i = 0;
	if (i == 1)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		i = 0;
		while (i < index)
		{
			previous = current;
			current = current->next;
			i++;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
