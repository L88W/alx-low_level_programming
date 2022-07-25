#include "main.h"
/**
 * create_array - creats array of characters
 * @size: size of array
 * @c: array of cahr
 * Return:  pointer to array null if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *i;

	if (size == 0)
		return (NULL);
	i = malloc(size * sizeof(char));
	if (i == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		i[y] = c;
	}
	return (i);
}
