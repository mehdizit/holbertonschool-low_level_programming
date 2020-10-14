#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	 int **ch;
	 int i, j;
	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	
	ch = (int **) malloc(sizeof(int *) * height);
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ch[i] = (int *) malloc(sizeof(int) * width);
		if (ch[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ch[j]);
				free(ch);
				return (NULL);
			}
		}
		for(j = 0; j < width; j++)
		{
			ch[i][j] = 0;
		}
		
	}
	return (ch);
		
}
