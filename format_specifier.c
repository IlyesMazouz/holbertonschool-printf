#include "main.h"

/**
*print_char - a function that outputs a charachter
*@va_list: a type used to access a variable number of arguments
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
*@va_list: a type used to access a variable number of arguments
*/

int print_string(va_list args)
{
	int count = 0;

	char *s = va_arg(args, char*);
	fputs(s, stdout);
	count += strlen(s);
	return (count);
}
