#include "lists.h"
void ComeFisrt(void) __attribute__ ((constructor));
/**
 * ComeFirst - prints a sentence before main function
 */
void ComeFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
