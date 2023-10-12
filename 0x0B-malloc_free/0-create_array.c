#include "main.h"
/**
 * *create_array - function used to create array
 * @size: size of an array
 * @c: index in array
 * @*str: pointer of array
 * Description: create an array of size size and assign char c
 * Return: NULL if function fail and str if success
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int num;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (num = 0; num < size; num++)
		str[num] = c;
	return (str);
}
