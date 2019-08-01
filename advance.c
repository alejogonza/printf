#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * fnbin - binary output
 * @arg: argument
 * Return: length
 */
int fnbin(va_list arg)
{
	int i, j, n, count = 0;

	unsigned int arr[100];

	n = va_arg(arg, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; n > 0; i++)
	{
		arr[i] = n % 2;
		n /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(arr[j] + 48);
		count++;
	}

	return (count);
}

/**
 * fnrot - rot output
 * @arg: argument
 * Return: length
 */

int fnrot(va_list arg)
{
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *c = va_arg(arg, char *);
	unsigned int i, j, bool, count = 0;

	if (c == NULL)
	{
		c = "(null)";
	}

	for (i = 0; c[i] != '\0'; i++)
	{
		bool = 0;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
			{
				_putchar(b[j]);
				bool = 1;
				break;
			}
		}
		if (bool != 1)
			_putchar(c[i]);
		count++;
	}

	return (count);
}

/**
 * fnrev - reverse output
 * @arg: argument
 * Return: length
 */

int fnrev(va_list arg)
{
	char *a;
	int i, j, count = 0;

	a = va_arg(arg, char *);

	if (a == NULL)
	{
		a = "(null)";
		count = 0;
	}

	for (i = 0; a[i] != '\0'; i++)
		count++;

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(a[j]);
	}

	return (0);
}
