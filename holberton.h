#ifndef MY_PRINTF
#define MY_PRINTF
#include <stdarg.h>

typedef struct pf
{
	char a;
	void (*f)(va_list);
} st;

int _printf(const char *format, ...);
int _putchar(char c);
void fnchar(va_list arg);
void fnstring(va_list arg);

#endif /* MY_PRINTF */
