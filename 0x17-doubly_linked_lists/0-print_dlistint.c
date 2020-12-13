#include "lists.h"
/**
 *print_dlistint -  prints all the elements of
 *@h : the list pointer
 *Return: number of
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
