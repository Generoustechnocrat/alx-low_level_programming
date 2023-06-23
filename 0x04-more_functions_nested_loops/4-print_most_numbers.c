#include "main.h"

/**
 * print_most_numbers - print most numbers from 0 to 9
 * (neither 2 nor 4)
 * Return: no return
 */

void print_most_numbers(void)
{
	int hi;

	for (hi = 48; hi < 58; hi++)
	{
		if (hi != 50 && hi != 52)
			_putchar(hi);
	}
	_putchar('\n');
}
