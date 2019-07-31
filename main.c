#include "holberton.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
	// NULL
	printf(NULL);
	_printf(NULL);
	printf("START OF TEST\n");

	//char
	char c = 'z';
	int alen, elen;
	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c\n", '\0');
	_printf("Actual     : %c\n", '\0');
	printf("Expected   : %%%c\n", 'y');
	_printf("Actual     : %%%c\n", 'y');

	//strings
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	char *str = "hello, world";
	alen = elen = 0;
	printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");
	printf("Expected   : %s$\n", "");
	_printf("Actual     : %s$\n", "");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
	printf("Expected   : %s$\n", NULL);
	_printf("Actual     : %s$\n", NULL);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");

	//%%
	alen = elen = 0;
	printf("=====================\n");
	printf("*****PERCENT*****\n");
	printf("=====================\n");
	elen = printf("Expected   : %%\n");
	alen = _printf("Actual     : %%\n");
	printf("Expected   : %i\n", alen);
	_printf("Actual     : %i\n", elen);
	elen = printf("Expected   : %%%%\n");
	alen = _printf("Actual     : %%%%\n");
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   :");
	printf("%");
	printf("\n");
	printf("Actual     :");
	_printf("%");
	printf("\n");

	//i
	printf("=====================\n");
	printf("*****INTEGER*****\n");
	printf("=====================\n");
	alen = elen = 0;
	int p = 237482;
	int n = -328472;
	int z = 0;
	elen = printf("Expected   : %i\n", p);
	alen = _printf("Actual     : %i\n", p);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %i\n", n);
	alen = _printf("Actual     : %i\n", n);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %i\n", z);
	alen = _printf("Actual     : %i\n", z);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %i\n", INT_MAX);
	_printf("Actual     : %i\n", INT_MAX);
	printf("Expected   : %i\n", INT_MIN);
	_printf("Actual     : %i\n", INT_MIN);

	//d
	printf("=====================\n");
	printf("*****DECIMAL*****\n");
	printf("=====================\n");
	alen = elen = 0;
	p = 1134001;
	n = -4567;
	z = 0;
	elen = printf("Expected   : %d\n", p);
	alen = _printf("Actual     : %d\n", p);
	printf("Expected   : %d\n", elen);
	_printf("Actual     : %d\n", alen);
	elen = printf("Expected   : %d\n", n);
	alen = _printf("Actual     : %d\n", n);
	printf("Expected   : %d\n", elen);
	_printf("Actual     : %d\n", alen);
	elen = printf("Expected   : %i\n", z);
	alen = _printf("Actual     : %i\n", z);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %d\n", INT_MAX);
	_printf("Actual     : %d\n", INT_MAX);
	printf("Expected   : %d\n", INT_MIN);
	_printf("Actual     : %d\n", INT_MIN);

	//b
	printf("=====================\n");
	printf("*****BINARY*****\n");
	printf("=====================\n");
	int b = 4312;
	printf("Expected   : %i\n", 1111011);
	_printf("Actual     : %b\n", 123);
	elen = printf("Expected   : %lu\n", 1000011011000);
	alen = _printf("Actual     : %b\n", b);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %i\n", 0);
	_printf("Actual     : %b\n", 0);

}
