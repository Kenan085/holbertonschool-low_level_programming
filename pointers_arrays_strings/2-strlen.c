#include "main.h"
#include <string.h>

/**
 *_strlen -  a function that returns the length of a string
 * @s: character
 * Return: length of a srring character
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
