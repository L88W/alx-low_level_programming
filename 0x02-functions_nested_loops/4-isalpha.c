#include "main.h"
/**
 * _isalpha -check if charcetr is lc or uc
 * @c: charcter to be checked
 *
 * Return: 1 if lc or uc, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
