#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *sum_listint - fuction to return sum of all data node of linked lists
 *@head: pointer to the first node of linked lists
 *Return: sum of data in integger
 */
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
