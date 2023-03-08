#include "main.h"

int actual_sqrt_recursion(int sqr, int na_r);

/**
 * _sqrt_recursion - Function to returns the natural square root of a number
 * @sqr: the square root to be calculated
 *
 * Return: result 0 on Success
 */

int _sqrt_recursion(int sqr)
{
	if (sqr < 0)
		return (-1);
	return (actual_sqrt_recursion(sqr, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @sqr: the sqaure root to be calculated.
 * @na_r: the parameter
 *
 * Return: result 0 on success
 */

int actual_sqrt_recursion(int sqr, int na_r)
{
	if (na_r * na_r > sqr)
	{
		return (-1);
	}
	if (na_r * na_r == sqr)
	{
		return (na_r);
	}
	return (actual_sqrt_recursion(sqr, na_r + 1));
}
