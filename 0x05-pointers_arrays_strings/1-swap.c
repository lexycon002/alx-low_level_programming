#include "main.h"
/**
 * swap_int - A function that swaps two integers
 * @a: first parameter to be swap
 * @b: second parameter to be swap
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

