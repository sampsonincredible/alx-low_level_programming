#include "main.h"

/**
 * largest_number - returns the largesst of 3 numbers
 * @a: first integar
 * @b: second integar
 * @c: third integar
 */

int largest_numbers(int a, int b, int c)
{
	int largest;
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
