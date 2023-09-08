#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int length = 0;

	int start = 0;

	int end;

	while (s[length] != '\0')
		length++;

	end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		_putchar(s[length]);
		start++;
		end--;


	}

	_putchar('\n');

}
