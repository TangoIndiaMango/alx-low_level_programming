#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print alphabets in lower case.
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
