#include "function_pointers.h"
/**
 * array_iterator - functio as parameter on each element of array
 * @array: array to execute func on
 * @size: size of arrau
 * @action: pointer to functio required
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
