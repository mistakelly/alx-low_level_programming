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
		_putkelly(str[i]);
		i++;
	}
	_putkelly('\n');
}

