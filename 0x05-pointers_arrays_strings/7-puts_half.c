#include "main.h"
/**
 * puts_half - prints of a string
 * @str: input
 * Return: 0
 */

void puts_half(char *str)
{
	int length = 0, n;

	while (length >= 0)
	{
		if (str[length] != '\0')
		{
			length++;
		}
		else
		{
			break;
		}
	}

	if (length % 2 == 0)
		n = length / 2;
	else
	{
		n = (length - 1) / 2;
		n = n + 1;
	}

	while (n < length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
