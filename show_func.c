#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * p_char - entry point
 * Description: argument for character (c)
 * @arg: char to print
 * Return: num of chars
 */

int p_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);

		_putchar(c);

	return (1);
}
