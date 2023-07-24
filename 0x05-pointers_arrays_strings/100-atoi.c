#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: string
 * Return: always 0
 */
int _atoi(char *s)
{
	int a, b, c, d, length, digit;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	length = 0;
	digit = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (a < length && b == 0)
	{
		if (s[a] == '-')
		{
			++c;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (c % 2)
			{
				digit = -digit;
			}
		d = d * 10 + digit;
		b = 1;
		if (s[a + 1] < '0' || s[a + 1] > '9')
		{
			break;
		}
		}
		a++
	}
	if (b == 0)
	{
		return (0);
	}

	return (n);
}
