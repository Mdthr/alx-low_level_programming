#include "main.h"

/**
 * print_last_digit -print the last digit
 * @n: the number
 * Return: value of the last number
 */
int print_last_digit(int)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (0);
}
