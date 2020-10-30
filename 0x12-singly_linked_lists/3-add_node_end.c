#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
	int i, len;
	list_t *ptr;
	list_t *temp;
	ptr = *head;
	temp = malloc(sizeof(list_t));
	len = 0;
	for (i = 0; str[len]; i++)
		len++;
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;
	while (ptr->next != NULL)
	{
		ptr = *head;
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (*head);
}

	
	
