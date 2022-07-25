#include "main.h"
/**
 * _strdup - pointer to new string to duplicate str
 * @str: string to copy
 * Return: pointer to array or null if fails
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
		i++;
	for (i = 0; str[i]; i++)
		;
		i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
	s[j] = str[j];
	}
	return (s);
}
