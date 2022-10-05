#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints all different combination of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	int i, j;
	int count = 0;

	while (num <= 7)
	{
		i = num + 1;
			while (i <= 8)
			{
				j = i + 1;
				while (j <= 9)
				{
					putchar(num + '0');
					putchar(i + '0');
					putchar(j + '0');
					if (count != 119)
					{
						putchar(',');
						putchar(' ');
					}
					j++;
					count++;
				}
				i++;
			}
			num++;
	}
	putchar('\n');
	return (0);
}


