#include "main.h"

/**
*print_newline - a function that ouputs a new line character
*@args: variable number of arguments * Return: value of count
*Return: (1)
*/

int print_newline(va_list args)
{
	(void)args;
	putchar('\n');
	return (1);
}
