#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
	int men = 0;

	while (s[men] != '\0')
		men++;

	while (men)
		_putchar(s[--men]);

	_putchar('\n');
}
