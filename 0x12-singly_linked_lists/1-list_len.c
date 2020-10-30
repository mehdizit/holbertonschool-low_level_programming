#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *list_len - count the number of elements of a linked lists
 *@h: pointer to the member of node of a linked lists.
 *Return: number int of elements.
 */
size_t list_len(const list_t *h)
{
	int i;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
