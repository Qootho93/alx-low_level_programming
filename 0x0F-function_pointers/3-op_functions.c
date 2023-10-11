#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return the sum of 2 numbers
 * @a: first number
 * @b: second number
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference between two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division of two numbers
 * @a: first number
 * @b: second number
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of division a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
