#include "main.h"

/**
 *print_rev - prints a string, in reverse
 *followed by a new line.
 *@s: string to print
 */

void print_rev(char *s)
{
	int length = 0;

	int i = 0;

	int start = 0;

	int end = length - 1;

	while (s[i] != '\0')
		i++;
		length++;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}

}
