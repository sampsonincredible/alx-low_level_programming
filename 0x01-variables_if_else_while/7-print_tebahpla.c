#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(ch);
	return (0);
}
