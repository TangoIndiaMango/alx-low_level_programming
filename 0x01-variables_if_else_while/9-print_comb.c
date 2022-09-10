#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int val;

	for (val = 0; val <= 9; val++)
	{
		putchar(val + '0');
		if (val != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

