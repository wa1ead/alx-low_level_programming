#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @n: pointer
 * Return: always 0
 */
char *string_toupper(char *n)
{
	int x;

	x = 0
	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
		{
			n[x] = n[x] - 32;
		}
		x++
	}

	return (n);
}
