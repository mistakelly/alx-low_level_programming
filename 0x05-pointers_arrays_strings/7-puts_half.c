#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int length = 0;

	int midpoint;

	int i;

	while (str[length] != '\0')
		length++;
	midpoint = length / 2;

	for (i = 0; i < midpoint; i++)
		_putchar(str[i]);

	_putchar('\n');
}

