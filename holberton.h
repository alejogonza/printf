#ifndef MY_PRINTF
#define MY_PRINTF
#include <stdarg.h>

/**
 * struct pf - entry point
 * Description: struct for conversion
 * @a: char
 * @f: format
 */

typedef struct pf
{
	char a;
	int (*f)(va_list);
} st;

int _printf(const char *format, ...);
int _putchar(char c);
int fnchar(va_list arg);
int fnstring(va_list arg);
int fnsucc(va_list arg);
int fnint(va_list arg);
int fnerror(va_list arg);
int fnvoid(va_list arg);

#endif /* MY_PRINTF */
