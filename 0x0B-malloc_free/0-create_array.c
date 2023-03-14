#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars.
 * @size: The size of the array.
 * @s: The storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char s)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(s) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = s;
	}
	return (arr);
}
