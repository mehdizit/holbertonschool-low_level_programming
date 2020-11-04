#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *reverse_listint - reverse linked lists.
 *@head: pointer to the first node.
 *Return: linked lists.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = NULL;
	temp2 = NULL;

	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = (*head);
		(*head) = temp2;
	}
	(*head) = temp;
	return (*head);
}
