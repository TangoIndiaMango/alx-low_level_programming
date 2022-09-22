#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int i, d, count;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}
	d = i;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; counnt >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
	}
}
