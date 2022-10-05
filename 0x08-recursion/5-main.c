#include "main.h"
#include <stdio.h>

/**
 * main - check code
 * Return: Alwways 0
 */
int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);

	return (0);
}
