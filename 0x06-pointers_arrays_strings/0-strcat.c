#iclude "main.h"

/**
 * _strcat - concatenate two strings'
 * @dest: destination
 * @src: source
 *
 * Return: the pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int number = 0, number2 = 0;

	while (*(dest + number) != '\0')
	{
		number++;
	}
	while (number >= 0)
	{
		*(dest + number) = *(src + number2);
		if (*(src + number2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
