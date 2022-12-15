#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: the digit
 * Return: 1 if is digit 0 otherwise
 */
int _isdigit(int c)
{
	int x;

	if (c >= 0 && c <= 9)
	{
		x = 1;
		return (x);
	}
	else
	{
		return (0);
	}

}
