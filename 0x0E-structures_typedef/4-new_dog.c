#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function tht creates a new sructure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer tonewly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, cpyowner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (ownner[len_owner])
		len owner++;

	new_dog == malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cpyname = malloc(len_name + 1);
	if (cpyname == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpyname[i] = name[i];
	cpyname[i] = '0\';

	cpyowner = malloc(len_owner + 1);
	if (cpyowner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpyowner[i] = owner[i];
	cpyowner[i] = '\0';

	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}	
