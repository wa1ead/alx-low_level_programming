#include "main.h"
/**
 * _puts - prints a string followed by new line
 * @str: string
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
