#include "holberton.h"
#define MAX 1024

void buffer(char a, int *i)
{
	char buff[MAX];
	int a = *i;

	if (i < MAX)
		buff[i] = a;
	else
		*i = 0;
}

void print_buffer(char *buff, int *i)
{
	int a = *i;

	write(1, buff, a);
}
