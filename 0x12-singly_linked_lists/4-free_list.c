#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_list - delete all data of all node of linked lists.
 *@head: pointer that traversing the linked lists from beginning.
 *Return: Always 0;
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
