#include "main.h"
#include "stdio.h"
#include "stdarg.h"
#include "string.h"

/**
*_printf - creating a customized printf function
*@format: a constant char
*Return: value of count
*/
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);
	while (*format)
	{
	if (*format == '%')
	{
	format++;
	if (*format == 'c')
	{
	char c = va_arg(args, int);
		putchar(c);
	count++;
	}
	else if (*format == 's')
	{
	char *s = va_arg(args, char*);

	fputs(s, stdout);
	count += strlen(s);
	}
	else if (*format == '%')
	{
		putchar ('%');
	count++;
	}
	}
	else
	{
	putchar(*format);
	count++;
	}
	format++;
	}
	va_end(args);
	return (count);
}
