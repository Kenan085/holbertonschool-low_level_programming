#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input
 * Return: Alwaays 0
 */
void rev_string(char *s)
{
	char str;
	int n, i = 0;

	n = _strlen(s);
	n = n - 1;
	while (i <= n / 2)
	{
		str = *(s + i);
		*(s + i) = *(s + n - i);
		*(s + n - i) = str;
		i++;
	}
}
