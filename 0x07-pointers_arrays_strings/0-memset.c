#include "main.h"
/**
 * _memset - fill pointed memory
 * @n: bytes pointed to by s
 * @s: with the constant b
 * @b: mem pointer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
