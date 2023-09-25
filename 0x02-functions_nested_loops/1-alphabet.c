#include "main.h"

/**
 * print_alphabet - print all alphabet in lower case
 * Return: nothing
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

}
