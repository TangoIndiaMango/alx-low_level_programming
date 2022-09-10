#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all numbers of base 16 in liwer case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

