#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *listint_len - function to count node of linked lists.
 *@h: head
 *Return: int number of elements.
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
