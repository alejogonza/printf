#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	len = _printf("1234%c\n", 'c');
	len2 = printf("1234%c\n", 'c');
	printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
