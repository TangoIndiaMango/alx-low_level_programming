#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: pointer to an int
 * @b: pointer to another int
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
