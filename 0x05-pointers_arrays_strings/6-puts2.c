#include "main.h"
/**
 * puts2 - print only one character
 * @str: string
 * Return: always 0
 */
void puts2(char *str)
{
	int length = 0;
	int m = 0;
	char *y = str;
	int c;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	m = length - 1;
	for (c = 0; c <= m; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
