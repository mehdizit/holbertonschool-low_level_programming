#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *add_node_end - insercertion of a new node at the end of linked lists.
 *@head: point to member of type list_t.
 *@str : string member of linked lidts that we duplicate and addzd in the new node.
 *Return: a new linked lists.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, len;
	list_t *temp;
	list_t *ptr;

	temp = malloc(sizeof(list_t));
	len = 0;
	for (i = 0; str[len]; i++)
		len++;
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (*head);
}
