#include "main.h"
/**
 * find_multipliers - looks for multis of n
 * @n: base
 * @i: iterator
 *
 * Return: 1 if nn is prime, 0 otherwise
 */
int find_multipliers(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (find_multipliers(n, i + 1));
}
/**
 * is_prime_number - checks if n is prime
 * @n: base
 *
 * Return: 1 if prime, o if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_multipliers(n, 2));
}
