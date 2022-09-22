#include "main.h"
#include <stdio.h>

/**
 * char *cap_string - change words to upper case
 * @s: pointer to char parameters
 *
 * Return: *s
 */
char *cap_string(char *s)
{
	int i, j;
	char stop_words[] = "\t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		for (j = 0; stop_words[j] != '\0'; j++)
			if (s[i] == stop_words[j] && s[i + 1] >= 97 && s[i + 1] < 122)
				s[i+1] = s[i + 1] -32;
	}
	return (s);
}
