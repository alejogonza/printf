#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * fnoct - octal output
 * @arg: argument
 * Return: length
 */

int fnoct(int arg)
{
       unsigned int i, n, j;
       unsigned int array[100];
	int count = 0;

	n = arg;

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
