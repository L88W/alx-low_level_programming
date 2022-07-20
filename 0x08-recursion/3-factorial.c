#include "main.h"
/**
 * factorial - returns factorial given
 * @n: lower than 0 return -1 for error
 *
 * Return: factorial value
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)

		return (-1);
	else if (n >= 0 && n <= 1)


		return (1);

	else

		fact *= factorial(n - 1);

	return (fact);
}
