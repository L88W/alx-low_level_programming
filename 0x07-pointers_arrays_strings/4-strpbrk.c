#include "main.h"
/**
 * _strbrk - searches bytes in string
 * @s: first prestent
 * @accept: matches bytes o r null if non
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
