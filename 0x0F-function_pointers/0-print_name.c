#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name of given
 * @f: name function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
