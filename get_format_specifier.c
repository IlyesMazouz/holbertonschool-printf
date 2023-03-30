#include "main.h"

/**
*get_format_specifier - a function that specifies a format charachter
*@c: a constant char
*@va_list: a type used to access a variable number of arguments
*/

int get_format_specifier(const char c, va_list args)
{
	int i = 0;

	format_specifier charachter[] = {
			{'c', print_char},
			{'s', print_string}
	};

	while (charachter[i].ch)
	{
		if (charachter[i].ch == c)
			return (charachter[i].f(args));
	i++;
	}
	return (0);
}