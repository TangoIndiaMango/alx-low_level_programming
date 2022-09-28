#include "main.h"

/**
 * _puts_recursion - prints a string on a newline
 * @s: string
 *
 * Return: string inputed
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
