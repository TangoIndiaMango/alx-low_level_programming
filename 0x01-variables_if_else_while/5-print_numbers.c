#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints number or base 10 starting from new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
