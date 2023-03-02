#include "main.h"

/**
 * reverse_array - A function that reverses
 * the content of an array of integers.
 * @a: The first parameter
 * @n: The second parameter
 */

void reverse_array(int *a, int n)
{
	int rev, arr;

	for (arr = n - 1; arr >= n / 2; arr--)
	{
		rev = a[n - 1 - arr];
		a[n - 1 - arr] = a[arr];
		a[arr] = rev;
	}
}
