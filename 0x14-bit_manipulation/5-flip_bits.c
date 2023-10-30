#include "main.h"
/**
 * flip_bits - number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, countbit = 0;
	unsigned long int curr;
	unsigned long int exc = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		curr = exc >> b;
		if (curr & 1)
			countbit++;
	}
	return (countbit);
}
