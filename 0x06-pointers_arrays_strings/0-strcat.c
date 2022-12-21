#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;
	char z[];

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';
	z[] = dest[a] + src[b];

	return (0);
}
