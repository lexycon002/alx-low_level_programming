#include "main.h"

/**
 * string_toupper - A function that changes lower case
 * to uppercase
 * @str: parameter to change
 *
 * Return: A pointer that point to the changed string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
		}
	}
	return (str);
}
