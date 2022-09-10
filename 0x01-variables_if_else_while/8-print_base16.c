#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all base 16 numbers in lowercase.
 *
 * REturn: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
