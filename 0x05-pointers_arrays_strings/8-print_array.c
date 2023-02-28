#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints elements of an array
 * of an array of integers.
 * @a: first parameter
 * @n: second parameter
 */

void print_array(int *a, int n)
{
	int prt_arr;

	for (prt_arr = 0; prt_arr < (n - 1); prt_arr++)
	{
		printf("%d, ", a[prt_arr]);
	}
	if (prt_arr == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
