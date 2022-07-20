#include "main.h"
/**
 * find_root - calcultes to check n
 * @n: base number
 * @i: iterartor
 *
 * Return: 1
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (find_root(n, i + 1));
	else
		return (-1);
}
