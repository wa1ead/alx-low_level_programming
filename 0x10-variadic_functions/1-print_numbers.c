#include "variadic_functions.h"
#include <stdio.h>
#include <stdrag.h>
/**
 * print_numbers - prints numbers
 * @separator: string printed between
 * @n: number of integers
 * @...: number of params
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%i", va_arg(nums, int));
		
		if(index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
