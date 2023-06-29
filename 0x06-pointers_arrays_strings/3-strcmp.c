#include "main.h"

/**
 * _strcmp - A that Compares two strings
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, copy = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		copy = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (copy);
}
