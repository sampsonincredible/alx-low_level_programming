#include "main.h"

/**
 * main - check for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
