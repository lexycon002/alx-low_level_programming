#include "main.h"

/**
 * _memset -A program that fills memory with constant byte
 * @s: A pointer to the memory area to be filled.
 * @b: The character needed to fill the memory area with.
 * @n: The number of bytes that needs to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
