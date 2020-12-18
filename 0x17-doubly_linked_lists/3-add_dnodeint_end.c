#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	tp = *head;
	while(tp->next != NULL)
		tp = tp->next;
	tp->next = temp;
	temp->prev = tp;
	return (*head);
}
		      
