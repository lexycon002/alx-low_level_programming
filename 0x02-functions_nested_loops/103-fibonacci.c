#include <stdio.h>
/**
 * main - program that print the sum of even value
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long int a, b, sum, even;

	a = 1;
	b = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		even = a + b;
		a = b;
		b = even;
	}
	printf("%lu\n", sum);
	return (0);

}
