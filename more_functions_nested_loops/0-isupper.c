#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: variable character
 * Return: Returns 1 if character is uppercase
 * else returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
