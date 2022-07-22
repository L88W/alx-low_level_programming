#include <stdio.h>
/**
 * main - prints no. of arguments
 * @argc: no. of command lines arguments
 * @argv: array that holds arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
