#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14
 * Return: table of numbers
 */
void more_numbers(void)
{
	int num = 10;

	while (num > 0)
	{
		int a = 0;

		while (a <= 14)
		{
			if (a >= 10 && a <= 14)
			{
				_putchar('1');
			}
			_putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
		num--;
	}
}
