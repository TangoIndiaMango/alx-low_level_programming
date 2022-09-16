#include "main.h"

/**
 * print_number - prints out an integer
 * @n: number to return
 * 45 - the ascii value of '-'
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (!(n / 10))
		_putchar('0' + n % 10);
	else
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
