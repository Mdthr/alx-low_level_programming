#include "main.h"

/**
 * _strcmp -  compares two strings
 * @*s1: first string
 * @s2: second string
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0
		while(s2[j] != '\0')
		{
			if (s1[i] = s2[j])
				j++;
		}
	s1 = s2[j];

	return (s1);
}
