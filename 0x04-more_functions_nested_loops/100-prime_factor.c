#include <stdio.h>

/**
 * main - Prints the largest prime factor of a number.
 *
 * Return: Always 0
 */

int main(void)
{
	long int x, y;

	x = 612852475143;
	for (y = 2; y <= x; y++)
	{
		if (x % y == 0)
		{
			x /= y;
			y--;
		}
	}
	printf("%ld\n", y);
	return (0);
}
