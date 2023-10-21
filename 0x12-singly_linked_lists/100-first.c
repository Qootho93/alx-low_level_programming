#include "lists.h"
void ComeFisrtbyMQ(void) __attribute__ ((constructor));
/**
 * ComeFirstbyMQ - prints a sentence before main function
 */
void ComeFirstbyMQ(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
