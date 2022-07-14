#include "main.h"
/**
 * rverse_array - reverses array
 * @a: array
 * @n: array contents
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			k = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = k;
		}
	}
}
