#include "main.h"

/**
 * *_strcat - This function appends the src string to the dest string,
 * @dest: first string
 * @src: second string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int n = 0, k;

	while (dest[n] != '\0')
	{
		n++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[n] = src[k];
		n++;
	}
	return (dest);
}
