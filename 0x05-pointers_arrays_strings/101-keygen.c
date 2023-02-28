#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random valid password
 *
 * Return: 0 Always
 */

int main(void)
{
	int passcode[100];
	int i, psc, x;

	psc = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passcode[i] = rand() % 78;
		psc += (passcode[i] + '0');
		putchar(passcode[i] + '0');
		if ((2772 - psc) - '0' < 78)
		{
			x = 2772 - psc - '0';
			psc += x;
			putchar(x + '0');
			break;
		}
	}

	return (0);
}
