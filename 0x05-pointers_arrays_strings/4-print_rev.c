#include "main.h"

/**
 * print_rev - Display a string in reverse
 * @s: string to reverse
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i, c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	for (i = 0; i < c; i++)
		_putchar(*(--s));
	_putchar('\n');
}
