#include "holberton.h"
#include <stdlib.h>
/**
 **malloc_checked - allocate memory
 *@b: size of memory to be allocated
 *Return: size of memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
