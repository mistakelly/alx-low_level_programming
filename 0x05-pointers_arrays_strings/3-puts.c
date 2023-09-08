#include "main.h"
#include <stdio.h>

/**
 * _puts - prints  a string followed by new line.
 * @s: - string to print
 */

void _puts(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* code */
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

