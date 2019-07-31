## My printf in c

<p align="center"><img width="250" src="https://i.ibb.co/C6kH9Bd/Sin-t-tulo-1.png" alt="printf logo"></a></p>

## Description

This repository contains a version of printf in c language, which maintains the main functions of this basic function. This project is a project requested by [Holberton School](https://www.holbertonschool.com/)


## Prerequisites 📋

you must have the gcc compiler and a 64-bit system installed for greater reliability:

### In linux:

`$ sudo apt install gcc`

`$ gcc --version`

`gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.`

### In windows:

[Follow the platzi tutorial](https://platzi.com/tutoriales/1469-algoritmos/1901-como-instalar-gcc-para-compilar-programas-en-c-desde-la-consola-en-windows/)


### Options :mag_right:

The following conversion operators are available:

- **s** = strings

- **c** = characters

- **i** = integers

- **d** = decimals

- **%** = percentage signs

- **b** = binary

## Running the tests ⚙️

When you have already cloned the repository, create this main.c:

`$#include "holberton.h"
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

}`

And run this command:

`$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c`

and you will see all the possibilities you can do with _printf.


## The pseudocode :pencil:

<h4 align="center">Flowchart</h4>

<p align="center"><img src="https://i.ibb.co/6NcnNJJ/Diagrama-en-blanco.png" alt="printf pse"></a></p>
<br>
<h4 align="center">Version 1</h4>
<p align="center"><img src="https://i.ibb.co/F7WD9DB/Whats-App-Image-2019-07-30-at-5-05-30-PM.jpg" alt="printf v1"></a></p>
<br>
<h4 align="center">Version 2</h4>
<p align="center"><img src="https://i.ibb.co/yRLVZpW/Whats-App-Image-2019-07-30-at-5-05-29-PM.jpg" alt="printf v2"></a></p>

## Authors :copyright:

* **Alejandro Gonzalez Serna** - [Github](https://github.com/alejogonza/)

* **Hugo vargas** - [Github](https://github.com/vargas88hugo)

