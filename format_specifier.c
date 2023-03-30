#include "main.h"

/**
*print_char - a function that outputs a charachter
*@args: variable number of arguments
*Return: value of count
*/

int print_char(va_list args)
{
	int count = 0;

	putchar(va_arg(args, int));
	count++;
	return (count);
}

/**
*print_string - a function that outputs a string
*@args: variable number of arguments
*Return: value of count
*/

int print_string(va_list args)
{
	int count = 0;

	char *s = va_arg(args, char*);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (*s != '\0')
	{
		putchar(*s++);
	count++;
	}
	return (count);
}

/**
*print_percent - a function that outputs a percent sign
*@args: variable number of arguments
*Return: value of count
*/
int print_percent(va_list args)
{
	(void)args;
	putchar('%');
	return (1);
}

/**
*print_exclamation - a function that outputs an exclamation point
*@args: variable number of arguments
*Return: value of count
*/
int print_exclamation(va_list args)
{
	(void)args;
	putchar('!');
	return (1);
}

/**
*print_percent_k - a function that outputs the string "%K"
*@args: variable number of arguments
*Return: value of count
*/
int print_percent_k(va_list args)
{
	(void)args;
	return (printf("%%K"));
}
