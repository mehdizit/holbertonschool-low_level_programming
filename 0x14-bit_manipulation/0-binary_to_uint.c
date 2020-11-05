#include "holberton.h"

unsigned int binary_to_uint(const char *b)
{
	int dec = 0, w = 1;
	int rem, a;
	int i = 0;

	while (b[i] != 0)
	{
		rem = (b[i] - '0') % 10;
		dec = dec + rem * w;
		a = (b[i] - '0');
		a = a / 10;
		w = w * 2;
		i++;
	}
	return (a);
}
	
