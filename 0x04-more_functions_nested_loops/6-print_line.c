#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number '_' to be printed
 */
void print_line(int n)
{
	int l;

	if (l > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}

	_putchar('\n');
}
