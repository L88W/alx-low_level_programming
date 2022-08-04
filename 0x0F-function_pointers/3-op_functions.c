#include "3-calc.h"

#include <stdlib.h>

#include <stdio.h>

/**
 * op_add - retruns sum of a and b
 * @a: first int
 * @b: secind int
 *
 * Return: void
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns sub of and b
 * @a: first int
 * @b: seconf int
 * Return: ans
 */
int op_sub(int a, int b)
{
	return (a - b);

}
/**
 * op_mul - returns the product of a and b
 * @a: first int
 * @b: secoind int
 * Return: ans
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return divivsion between ibts
 * @a: firts int
 * @b:secinf int
 * Return: ans
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - ...
 * @a: ..
 * @b: ...
 * Return: ands
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
