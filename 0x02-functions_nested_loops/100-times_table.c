#include <stdio.h>
#include "main.h"
/**
 * print_times_table - program that prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0; i < 10; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + 1;
		}
	printf("%d\n", sum);
	return (0);
}
