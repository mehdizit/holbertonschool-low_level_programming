#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_listint - function to print number and content of node linked lists.
 *@h: head of linked lists.
 *Return: number of node.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
