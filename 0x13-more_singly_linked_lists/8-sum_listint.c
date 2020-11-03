#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

int sum_listint(listint_t *head)
{
	int sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
