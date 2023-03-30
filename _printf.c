#include "main.h"

/**
*_printf - Customized printf function
*@format: constant char
*Return: Number of characters printed
*/

int _printf(const char *format, ...)
{
	int i = 0, count = 0, specifier = 0;

	va_list args;

	va_start(args, format);
	if (format == NULL || (format[i] == '%' && strlen(format) == 1))
		return (-1);
	while (*format)
	{
	if (specifier == 0)
	{
	if (*format == '%' && strlen(format) > 1)
		specifier = 1;
	else if (*format == '%' && strlen(format) == 1)
	return (-1);
	else
	{
	putchar(*format);
	count++;
	}
	}
	else if (specifier == 1)
	{
	count += printf(format, args);
	specifier = 0;
	}
	format++;
	}
	va_end(args);
	return (specifier);
}
