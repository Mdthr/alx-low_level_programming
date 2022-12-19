#include "main.h"

/**
 * _puts - function that prints a string
 * @str: input string
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	putchar('\n\();
}
