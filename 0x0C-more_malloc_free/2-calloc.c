#include "main.h"
#include <stdlib.h>
/**
 * *_memset - memory with constant byes
 * @s: memorry to be fiile
 * @b: char to copy
 * @n: number of times to copy b
 * Return:pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * *_calloc - allocates memory for array
 * @nmemb: number  of element in array
 * @size: size of each element
 * Return: pointr to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
