#include "main.h"

/**
 *print_rev - prints a string, in reverse
 *followed by a new line.
 *@s: string to print
 */

void print_rev(char *s)
{
	int length = 0;

	int start = 0;

	int end;

	while (s[length]  != '\0')
	{
		length++;
	}

	end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		_putchar(*s);
		start++;
		end--;
	}

	_putchar('\n');

}
