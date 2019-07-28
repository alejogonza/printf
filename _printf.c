#include "holberton.h"
#include <stdarg.h>

int printf(const char *format, ...)
{
	st arr[] = {
		{'c', fnchar},
		{'s', fnstring},
		{'\0', NULL}
	}

	int i, j;

	va_list arg;

	va_start(arg, format);

        for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; st[j].a != '\0'; j++)
			{
				if (format[i + 1] == st[j].a)
				{
					st[j].f;
					i += 2;
					break;
				}
				else if (st[j + 1].a == '\0')
				{
					_putchar(va_arg(arg, char));
					i += 2;
				}
				else if (format[i + 1] == '%')
				{
					_putchar(format[i + 1]);
					i += 2;
					break;
				}
			}
		}
		_putchar(va_arg(arg, char));
	}

	va_end(arg);

	return (0);
}
