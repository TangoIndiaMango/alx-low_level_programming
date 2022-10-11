#include <stdio.h>

/**
 * main - prints a number from 00 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	int i;
	int count = 0;

	while (num <= 98)
	{
		i = num + 1;
		while (i <= 99)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (count != 4949)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
			count++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}

