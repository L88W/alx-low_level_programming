#include "main.h"
/**
 * print_line - draw a line in the terminal
 * @n: no if times
 * Return : 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
