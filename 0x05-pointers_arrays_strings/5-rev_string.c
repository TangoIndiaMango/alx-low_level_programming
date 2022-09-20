#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * rev_string - reverse a string s
 * @s: string to reverse
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j, k;
	int temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		k++;
		j--;
	}
}
