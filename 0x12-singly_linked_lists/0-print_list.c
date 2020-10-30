#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - function to return numbre of node and str data with lenth.
 *@h: pointer to membert next (of typr int) in the type list_t.
 *Return: numbre of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
