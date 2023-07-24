#include "main.h"
/**
 * print_rev - prints en reversa
 * @s: string
 * Return: always 0
 */
void print_rev(char *s)
{
	int length = 0;
	int c;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (c = length; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
