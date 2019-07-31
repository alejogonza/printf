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
		count++;
		_putchar(arr[j] + 48);
	}
	return (count);
}

#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * fnoct - octal output
 * @arg: argument
 * Return: length
 */

int fnoct(va_list arg)
{
       unsigned int i, n, j;
       unsigned int array[100];
	int count = 0;

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
                       array[i] = n % 8;
                       n /= 8;
               }
               array[i] = n % 8;
               for (j = i - 1; j > 0; j--)
               {
                      _putchar(array[j] + 48);
                       count++;
               }
               count++;
               _putchar(array[j] + 48);
       }
       return (count);
}
