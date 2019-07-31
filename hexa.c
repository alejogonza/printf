#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * hexadec - conversor hex to dec
 * @var: int
 * Return: 0
 */

int fnbin(va_list arg)
{
	unsigned int i, j, n, count = 0;

	unsigned int arr[100];

	n = va_arg(arg, int);

	if (n < 1)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		for (i = 0; n > 0; i++)
		{
			arr[i] = n % 8;
			n /= 8;
		}

		arr[i] = n % 8;

		for (j = i - 1; j > 0; j--)
		{
			_putchar(arr[j] + 48);
			count++;
		}
		count++;
		_putchar(arr[j] + 48);
	}
	return (count);
}
