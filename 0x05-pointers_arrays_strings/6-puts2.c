#include "main.h"
/**
 * puts2 - prints every other character of string,straing with first
 * @str: input string
 * Return: 0
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] != '\0')
		{
			if (count % 2 == 0)
			{
				_putchar(str[count]);
			}
			count++;
		}
		else
		{
			count = -1;
			_putchar('\n');
		}
	}
}
