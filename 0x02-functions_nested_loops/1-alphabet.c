/**
 * main - holds and brings functions
 *
 */
#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case + new line
 *
 * return: always 0
 */

void print_alphabet(void)
{
	char alpha;

	int _putchar(int c);

	for (alpha = 97; alpha <= 122; alpha++)
		_putchar(alpha);

	_putchar('\n');

	return (0);
}
