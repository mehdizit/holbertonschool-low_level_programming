#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint2 - to free linked lists
 *@head: head of linked lists
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
