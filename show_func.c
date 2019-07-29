#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * fnchar - entry point
 * Description: argument for character (c)
 * @arg: char to print
 * Return: Always 0 (Success)
 */
int fnchar(va_list arg)
{
	char c;
	c = (char)va_arg(arg, int);
	_putchar(c);

	return (0);
}

int fnstring(va_list arg)
{
	int i, count = -1;
	char *s;
	s = va_arg(arg, char*);

	if (s == '\0')
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
			_putchar(s[i]);
		        count++;
	}

	return (count);
}
