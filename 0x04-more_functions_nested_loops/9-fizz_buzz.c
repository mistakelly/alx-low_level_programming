#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */


int main(void)
{
	int limit = 100;

	for (int i = 1; i <= limit; i++)
{
		int isFizz = i % 3 == 0;
		int isBuzz = i % 5 == 0;

		if (isFizz && isBuzz)
		{
			printf("FizzBuzz ");
		} else if (isFizz)
		{
			printf("Fizz ");
		} else if (isBuzz)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", i);
		}
	}

	return (0);
}

