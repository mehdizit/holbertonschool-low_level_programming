#include "holberton.h"

unsigned int binary_to_uint(const char *b)
{
	int dec = 0, w = 1;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		
		dec = dec + ((b[i] - '0') * w);
		w = w * 2;
		i++;
	}
	return (dec);
}
	
