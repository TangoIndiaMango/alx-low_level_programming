#include <main.h>
/**
 *
 * _isalpha - chec if c is lowercase
 *
 * @c: character to check
 *
 * Return: ! if c character is an alphabet, else 0.
 */

int _isalpha(int)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
