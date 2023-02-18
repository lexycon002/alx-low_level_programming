#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
