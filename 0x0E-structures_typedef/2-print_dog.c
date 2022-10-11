#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: struct dog
 *
 * Return: value of struct or nil if values arent supplied
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}