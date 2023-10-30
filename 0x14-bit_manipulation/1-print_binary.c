#include "main.h"

/**
 * _pow - prints function tha calculates base ^ power
 * @base: base
 * @power: power
 * Return: value of base exponent power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int c;

	num = 1;
	for (c = 1; c <= power; c++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints numbers of binary
 * @n: number to print
 * Return: (void)
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
