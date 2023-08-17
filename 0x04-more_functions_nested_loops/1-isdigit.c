#include "main.h"
#include <stdio.h>

/**
 * is_digit - check if a given number is digit
 *
 * @x: the number to be checked (so it is basically the value of 0-9 in ascii)
 * Return: 1 for the number that is digit and 0 for other wise
 */

int _isdigit(int x)

{

	if (x >= 48 && x <= 57)
	return (1);
	return (0);
}
