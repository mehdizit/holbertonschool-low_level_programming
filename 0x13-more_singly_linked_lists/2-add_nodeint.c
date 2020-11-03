#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint - function to add node at the beginning of linked lists.
 *@head: head of linked lists.
 *@n: data integer of node.
 *Return: new linked lists.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
