#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed to program
 * @argc: number of arguments
 * @argv: array arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
