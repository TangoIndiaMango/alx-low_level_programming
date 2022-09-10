#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program which will print the combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int i;
	int count = 0;

	while (num <= 8)
	{
		i = num + 1;
		while (i <= 9)
		{
			putchar(num + '0');
			putchar(i + '0');
			if (count != 44)
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
