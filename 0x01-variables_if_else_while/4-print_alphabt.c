#include <stdio.h>
/**
* main - entry point
* while - loop
* if..else - statement
* Return: always 0
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 102 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}