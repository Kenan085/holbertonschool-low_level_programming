#include "main.h"

/**
 * _strcpy - copy string to arr
 * @dest: arr
 * @src: string
 * Return: copied arr
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0, m;

	while (src[n] != '\0')
	{
		n++;
	}
	for (m = 0; m <= n; m++)
	{
		*(dest + m) = src[m];
	}
	dest[n + 1] += '\0';
	return (dest);
}
