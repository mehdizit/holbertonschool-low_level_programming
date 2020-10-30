#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;
	ptr = *head;
	temp = malloc(sizeof(list_t));
	temp->str = strdup(str);
	temp->next = NULL;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}

	
	
