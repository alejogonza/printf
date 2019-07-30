#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * fnchar - argument for character (c)
 * @arg: char to print
 * Return: Always 0 (Success)
 */
int fnchar(va_list arg)
{
	char c;

	c = (char)va_arg(arg, int);

	_putchar(c);

	return (1);
}

/**
 * fnstring - argument for string (s)
 * @arg: argument
 * Return: count
 */
int fnstring(va_list arg)
{
        int i, count = 0;

	char *s;

	s = va_arg(arg, char*);

	if (s == NULL)
	{
		s = "(null)";
		count = 0;
	}

	for (i = 0; s[i] != '\0' && s != NULL; i++)
	{
		_putchar(s[i]);
		count++;
	}

	return (count);
}

/**
 * fnsucc - Function that prints "Success"
 * @arg: argument
 * Return: count
 */
int fnsucc(__attribute__((unused)) va_list arg)
{
	int i, count = 0;

	char *s = "Success";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		count++;
	}

	return (count);
}

int fnint(va_list arg)
{
        long int s;
	unsigned int i = 0, j, k, count = 1;

	s = va_arg(arg, int);
	j = s;

	if (s < 0)
	{
		j = s * -1;
		_putchar('-');
		i++;
	}
	else if (s == 0)
	{
		i++;
		_putchar('0');
	}
	else
		j = s;
	k = j;
	while (j > 0)
	{
		j /= 10;
		count *= 10;
	}
	count /= 10;
	while (count > 0)
	{
		_putchar(((k / count) % 10) + 48);
		count /= 10;
		i++;
	}

	return (i);
}
/*
int fnvoid(va_list arg)
{
	char c;

	c = (char)va_arg(arg, int);

	_putchar('%');

	_putchar(c);

	return (2);
}
*/
int fnerror(__attribute__((unused)) va_list arg)
{
	return (-1);
}
