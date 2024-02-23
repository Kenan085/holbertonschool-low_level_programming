#include <stdio.h>

/**
 * main -True
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		else
		{
			putchar(letter);
			putchar('\n');
		}
	}
	return (0);
}
