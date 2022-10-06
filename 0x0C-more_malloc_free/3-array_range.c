#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_rane - initialize memory space for integers
 * @min: string 1
 * @min: string 2
 *
 * Return: pointer to concatinated string
 */

int *array_range(int min, int max)
{
	int *newArray;
	int j, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	newArray = malloc(len * sizeof(int));
	if (newArray == NULL)
		return (NULL);

	for (j = 0; j < len; j++)
	{
		*(newArray + j) = min;
		min++;
	}

	return (newArray);
}
