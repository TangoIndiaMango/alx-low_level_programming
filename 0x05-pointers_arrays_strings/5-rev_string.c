#include "main.h"

/**
 * rev_string - reverse a string s
 * @s: string to reverse
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;
	int k;
	c = 0;
	char arr[500];

	for (i = 0; s[i] != '\0'; i++)
		arr[i] = s[i];

	for (k = i - 1; k >= 0; k--)
	{
		s[k] = arr[c];
		c++;
	}
}
