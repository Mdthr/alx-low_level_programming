#include "main.h"

/**
 * _islower - check if a charcter lower case
 *@c: the charcter
 * Return: 1 if character is lower case or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
