#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

typedef struct format
{
	char ch;
	int (*f)(va_list);
} format_specifier;

int get_format_specifier(const char c, va_list args);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);

#endif
