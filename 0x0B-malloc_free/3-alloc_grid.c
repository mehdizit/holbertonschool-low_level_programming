#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 ***alloc_grid - allocate space memory to 2D array and than initialize it to "0".
 *@width: first size of array 2D
 *@height: second size of array 2D
 *
 */
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
	for (i = 0; i < height; i++)
	{
		ch[i] = (int *) malloc(sizeof(int) * width);
		if (ch[i] == NULL)
		{
				return (NULL);
		}
		for(j = 0; j < width; j++)
		{
			ch[i][j] = 0;
		}
		
	}
	return (ch);
		
}
