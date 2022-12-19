#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * Return: the lenght of string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght) != '\0')
		lenght++;
	return (lenght);
}
