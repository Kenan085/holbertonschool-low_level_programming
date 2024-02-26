#include <stdio.h>
#include "main.h"

/**
 * main - Fizz Buzz babyyyy
 * Return: Always 0
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz");
		} else if (num % 5 == 0)
		{
			printf("Buzz");
		} else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", num);
		}
		if (num < 100)
			printf(" ");
		num++;
	}
	printf("\n");
	return (0);
}
