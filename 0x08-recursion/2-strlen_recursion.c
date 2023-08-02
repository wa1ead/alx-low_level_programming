#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
