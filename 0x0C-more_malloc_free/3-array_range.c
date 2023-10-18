#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates array of integers
 * @min: minimum range of value srored
 * @max: maximun array of value stored
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
