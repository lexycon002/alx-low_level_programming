#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an inputted number of elements
 * of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */

void print_array(int *a, int n)
{
	int prt_arr;

	for (prt_arr = 0; prt_arr < n; prt_arr++)
	{
		printf("%d, ", a[prt_arr]);
	}
	if (prt_arr == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
