#include "main.h"

/**
 * *_strchr - Returns a pointer to the first occurrence of the character
 *  c in the string s, or NULL if char is not found
 *  @s: string
 *  @c: character we need to find
 *  Return: first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}

	return (NULL);
}
