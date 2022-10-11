#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creats an array of chars and initailize
 * @size: size of array
 * @c: char to initialize
 *
 * Return:  NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* check malloc was allocated */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
