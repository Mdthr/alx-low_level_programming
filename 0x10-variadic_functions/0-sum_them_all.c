#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;

	va_list numb;

	va_start(numb, n);

	for (i = 0; i < numb; i++)
		sum += va_args(numb, n);

	va_end(numb);

	return (sum);
}
