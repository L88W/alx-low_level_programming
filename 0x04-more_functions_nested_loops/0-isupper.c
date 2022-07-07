#include "main.h"

/**
 * _isupper - check to see if char  is upper case
 * @c: char to be tested
 * Return: 0
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
