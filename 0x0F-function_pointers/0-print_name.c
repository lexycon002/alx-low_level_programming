#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: The name to be printed in the program.
 * @f: A pointer to a function that prints a name in the program.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
