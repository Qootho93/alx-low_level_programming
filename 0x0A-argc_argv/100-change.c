#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of of coins to
 * make chang for amount of money
 * @argc: arguments
 * @argv: arry arguments
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	return (0);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("d\n", result);
	return (0);

}
