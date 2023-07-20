#include "main.h"
/**
 * print_most_numbers - print nums except 2 and 4
 * Return: always 0
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
		if (c == '2' || c == '4')
		{
			continue;
		}
	}
	_putchar('\n');
}
