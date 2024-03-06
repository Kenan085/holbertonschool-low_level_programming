#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: a pointer to the byte iin s that matches one of the bytes in accept
 * or NULL if no such byte is found;
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int n, m;

	for (n = 0; *(s + n) != '\0'; n++)
	{

		for (m = 0; *(accept + m) != '\0'; m++)
		{
			if (*(s + n) == *(accept + m))
			{
				return (s + n);
			}
		}
	}

	return (NULL);
}
