#include "main.h"

/**
 * print_square - wite a function that prints square
 * @size: size of square
 *
 * Return: no return
 */

void print_square(int size)
{
	int i, k;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
