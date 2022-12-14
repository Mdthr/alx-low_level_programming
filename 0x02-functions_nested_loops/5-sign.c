#include "main.h"

/**
 * print_sign - print a sing of n
 * @n: the number of the sign be printed
 * Return: 1 if number is greter than zero
 * 0 is number is zero -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
