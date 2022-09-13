#include <main.h>
#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * print_alphabet: print alphabets in lower case.
 *
 * Return: Always (Success)
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
