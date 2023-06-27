#include "main.h"

/**
 * puts2 - Prints one char out of 2 of a string.
 * @str: input string.
 *
 * Return: no return.
 */

void puts2(char *str)
{
	int men = 0, i = 0;

	while (str[men] != '\0')
		men++;

	men -= 1;

	for (; i <= men; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
