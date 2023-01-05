#include "main.h"

/**
 * _puts - Display a string at stdoutput
 * @str: Sting to display
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
