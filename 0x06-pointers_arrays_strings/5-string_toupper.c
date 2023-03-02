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
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] = str[j] - 32;
		j++;
	}
	return (str);
}
