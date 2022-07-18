#include "main.h"
/**
 * _memcpy - coppies n bytes from src to dest
 * @n: copies
 * @src: bytes from memory
 * @dest: to memory
 * Return : to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
