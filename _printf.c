#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * fnstruct - entry point
 * Description: struct for printf
 * @format: formats
 * Return: null
 */

int (*fnstruct(char format))(va_list)
{
	int i;

	st arr[] = {
		{'c', fnchar},
		{'s', fnstring},
		{'m', fnsucc},
		{'\0', NULL}
	};

	for (i = 0; arr[i].a != '\0'; i++)
	{
		if (format == arr[i].a)
			return (arr[i].f);
	}

	return (NULL);
}

/**
 * _printf - entry point
 * Description: struct for conversion specifiers
 * @format: format of char
 * Return: length of byte
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list arg;

	va_start(arg, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%'), i++;
			}
			else
				count += fnstruct(format[i + 1])(arg), i++;
		}
		else
			_putchar(format[i]), count++;
	}
	va_end(arg);
	return (count);
}
