#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	 int **ch;
	 int i;
	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	
	ch = (int **) malloc(sizeof(int *) * width);
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ch[i] = (int *) malloc(sizeof(int) * height);
		if (ch[i] == NULL)
		{
			return (NULL);
		}
	}
	return (ch);
		
}
