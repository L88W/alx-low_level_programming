#include "main.h"
/**
 * void swap_int - swaps intergers
 * @a- input 1
 * @b- input 2
 * Return: 0
 */

void swap_int(int *a, int *b)

{	
	int c = *b;
	*b = *a;
	*a = c;
}
