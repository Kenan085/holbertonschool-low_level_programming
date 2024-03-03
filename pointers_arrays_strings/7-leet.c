#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: str
 * Return: encoding str
 */
char *leet(char *a)
{
	char arr1[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};
	char *p = a;
	int i, flag;

	for (; *a != '\0'; a++)
	{
		flag = 1;
		for (i = 0; arr1[i] != '\0' && flag == 1; i++)
		{
			if (*a == arr1[i] || *a == (arr1[i] - 32))
			{
				*a = num[i];
				flag = 0;
			}
		}
	}
	return (p);
}
