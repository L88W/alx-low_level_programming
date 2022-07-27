#include "main.h"

#include <stdlib.h>

#include <stdio.h

/**
 * strtow - split string into words
 * @str: string to split
 * Return: point to array
 *
 */
char **strtow(char *str)
{
	int i, j, k = 0, l, m, count = 0, len;
	char **words;
	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	if (count == 0)
		return (NULL);
