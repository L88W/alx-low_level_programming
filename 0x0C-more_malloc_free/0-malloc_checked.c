#include "main.h"
/*8
 * malloc_checked - terminatioation value of 98
 * @b: allocated memory
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	       exit(98);
	return (i);
}	
