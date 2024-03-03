#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input
 * Return: Alwaays 0
 */
void rev_string(char *s)
{
	char *ends, *begins;
	int n, i = 0;

	n = 0;
	while (s[n] != '\0' && s[n + 1] != '\0')
	{
		ends++;
		n++;
	}
	n = n + 1;
	begins = s;

	while (i < n / 2)
	{
		char str;

		str = *ends;
		*ends = *begins;
		*begins = str;
		begins++;
		ends--;
		i++;
	}
}
