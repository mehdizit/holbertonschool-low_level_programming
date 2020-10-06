#include "holberton.h"
/**
 * *_memcpy -  copy memory from src to dest
 *
 *@dest:char
 *
 *@src:char
 *
 *@n:unsigned int
 *
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (dest && n > 0)
	{
		*dest = *src;
		n--;
		dest++;
		src++;
		
	}
       
	return (dest);
}
