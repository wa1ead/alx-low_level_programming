#include "main.h"
/**
 * _islower - checking alphabets in loercase
 * @c: ASCII character
 * if - statement
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
