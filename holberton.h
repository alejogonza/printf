#ifndef HOLBERTON_H_
#define HOLBERTON_H_
#include <stdarg.h>

typedef struct pf
{
	char a;
	void (*f)(va_list);
} st;

int _putchar(char c);
int printf(const char *format, ...);

#endif
