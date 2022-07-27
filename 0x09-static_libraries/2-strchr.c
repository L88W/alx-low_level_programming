#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates character
 * @c: character present
 * @s: string
 * Return: point to first present character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
