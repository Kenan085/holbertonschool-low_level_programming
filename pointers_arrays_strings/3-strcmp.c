#include "main.h"

/**
 * _strcmp - compares two str
 * @s1: first str
 * @s2: second str
 * Return: - if lower; + if higher, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		n += (*s1 - *s2);
		s1++;
		s2++;
	}
	return (n);
}
