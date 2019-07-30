#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

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
			arr[i] = n % 2;
			n /= 2;
		}

		arr[i] = n % 2;

		for (j = i - 1; j > 0; j--)
		{
			_putchar(arr[j] + 48);
			count++;
		}
		_putchar(arr[j] + 48);
	}
	return (count);
}
