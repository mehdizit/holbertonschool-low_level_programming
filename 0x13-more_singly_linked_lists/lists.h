#ifndef _LISTS_H
#define _LISTS_H
#include <stdlib.h>
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);


#endif
