#include <main.h>

/**
 *
 * print_sign - Test if c is greater than zero, less or equal to 0
 * @c: Number to test
 *
 * Return: Sign from a number
 */

int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
		
