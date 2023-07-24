#include "main.h"
/**
 * puts_half - prints half of string
 * @str: string
 * Retutn: always 0
 */
void puts_half(char *str)
{
	int l, n, length;

	length = 0;
	for (l = 0; str[l] != '\0'; l++)
	{
		length++;
	}
	n = (length / 2);
	if ((length % 2) == 1)
	{
		n = ((length + 1) / 2);
	}
	for (l = n; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
