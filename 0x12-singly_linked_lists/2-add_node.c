#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node - add node at beginning of a linked lists.
 *@head: pointer to members of node of type list_t.
 *@str: char
 *Return: a  linked lists with a new node at the beginning.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;
	int i;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	len = 0;
	for (i = 0; str[i]; i++)
		len++;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
