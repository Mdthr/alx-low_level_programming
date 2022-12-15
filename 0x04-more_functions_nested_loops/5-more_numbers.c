#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(a + '0');
		}
		_putchar('\n');
	}
}

