#include "main.h"
/**
 * rot13 - encodes string (rot13)
 * @s: input string
 * Return: pointer to destination
 */
char *rot13(char *s)
{
	int a = 0, i;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + a) == letters[i])
			{
				*(s + a) = rot13[i];
				break;
			}
		}
		a++;
	}
	return (s);
}
