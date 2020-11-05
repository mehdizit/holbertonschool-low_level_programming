#include "holberton.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	       
		dec = dec * 2  + (b[i] - '0');
		i++;
	}
	return (dec);
}
	
