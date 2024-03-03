#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: character
 * Return: s
 */
int _atoi(char *s)
{
	int i = 0, signn = 1;
	unsigned int n = 0;

	if (*s == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + i] > '9')
				return (sign * n);
		}
		i++;
	}
	return (sign * n);
}
