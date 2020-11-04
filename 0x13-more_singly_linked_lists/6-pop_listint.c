#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *pop_listint - delete first node
 *@head: head of linked list
 *Return: new linked lists after deletion first node
 */
int pop_listint(listint_t **head)
{
	if (!*head || !head)
		return (0);
	else
	{
		listint_t *temp;

		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return ((*head)->n);
}
