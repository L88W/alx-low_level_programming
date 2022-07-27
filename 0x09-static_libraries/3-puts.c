#include "main.h"
/**
 * _puts - prints strid and new line to stdout
 * @str: input
 * Return:0
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] != '\0')
		{
			_putchar(str[count]);
			count++;
		}
		else
		{
			count = -1;
			_putchar('\n');
		}
	}
}
