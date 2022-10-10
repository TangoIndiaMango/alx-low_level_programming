#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog memory allocated
 * @d: struct dog
 *
 * Return: no output to be returned
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
