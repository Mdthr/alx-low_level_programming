#include "variadic_functions.h"
#include<stdio.h>
/**
 * print_numbers -  function that prints numbers
 * @*separator: the separetor bettwen number
 * @n: ther number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	
	va_list list;
	for (i = 0; i < n; i++)
		printf("%d", arg(list, n));
	printf("%d" , ",");
	return (0);
}
