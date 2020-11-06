#include "holberton.h"

int count_set_bit(char number)
{
	int count, i;

	while (number > i)
	{
		count = count + (number & 1);
		number = number >> 1;
		i++;
	}
	return (number);
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_xor_b;
	int a;
	n_xor_b = n ^ m;
	a = count_set_bit(n_xor_b);
	return (a);
}
	
	
	
