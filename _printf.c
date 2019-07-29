#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - entry point
 * Description: struct for conversion specifiers
 * @format: format of char
 * Return: length of byte
 */
int _printf(const char *format, ...)
{
	st arr[] = {
		{'c', fnchar},
		{'s', fnstring},
		{'\0', NULL}
	};
	int i, j, x, count = 0;
	va_list arg;

	va_start(arg, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; arr[j].a != '\0'; j++)
			{
				if (format[i + 1] == arr[j].a)
				{
					x = arr[j].f(arg);
					count += x, i += 2;
					break;
				}
				else if (arr[j + 1].a == '\0')
				{
					_putchar(format[i]);
					i += 2;
					break;
				}
				else if (format[i + 1] == '%')
				{
					_putchar(format[i + 1]);
					i += 2;
					break;
				}
			}
			count++;
		}
		_putchar(format[i]), count++;
	}
	va_end(arg);
	return (count);
}
