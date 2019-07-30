#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * fnstruct - Function pointer that return a function
 * @format: format of char
 * Return: integer
 */
int (*fnstruct(char format))(va_list)
{
	int i;

	st arr[] = {
		{'c', fnchar},
		{'s', fnstring},
		{'m', fnsucc},
		{'d', fnint},
		{'i', fnint},
		{'\0', fnerror}
	};

	for (i = 0; arr[i].a != '\0'; i++)
	{
		if (format == arr[i].a)
			return (arr[i].f);
	}

	return (fnerror);
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

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			else if (format[i + 1] == '%')
			{
				_putchar('%'), i++, count++;
			}
			else
			{
				count += fnstruct(format[i + 1])(arg);
				i++;

				if (count == -1)
				{
					_putchar('%');
					_putchar(format[i]);
					count = 2;
				}
			}
		}
		else
			_putchar(format[i]), count++;
	}
	va_end(arg);
	return (count);
}
