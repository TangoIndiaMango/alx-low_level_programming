#include "function_pointers.h"

/**
 * array_iterator - executes a function given a parameter on each element of array
 * @array: input integer array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: no return
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
