#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function tha print a struct dog
 * @d: struct to initiate
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)

		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	free(d);
	return;
}
