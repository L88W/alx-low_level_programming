#include <stdio.h>
/**
 * main - prinats arguments
 * @argc: number of command line argu
 * @argv: arry holding progarm arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
