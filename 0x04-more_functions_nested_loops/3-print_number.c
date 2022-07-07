#include "main.h"
/**
 * print_numbers - prints 1-9 and new line
 * Return: 0
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
