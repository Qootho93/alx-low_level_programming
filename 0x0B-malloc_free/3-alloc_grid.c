#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: with input
 * @height: height input
 * Return: pointer to 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **moo;
	int x, y;


	if (width <= 0 || height <= 0)
		return (NULL);
	moo = malloc(sizeof(int *) * height);

	if (moo == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		moo[x] = malloc(sizeof(int) * width);
		if (moo[x] == NULL)
		{
			for (; x >= 0; x--)
				free(moo[x]);
			free(moo);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			moo[x][y] = 0;
	}
	return (moo);

}
