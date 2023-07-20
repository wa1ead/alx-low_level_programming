#include "main.h"
/**
 * print_numbers - print nums except 2 and 4
 * Return: always 0
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
