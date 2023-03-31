#include "main.h"

/**
* print_integer - a function taht outputs an integer
*@args: variable number of arguments
*Return: value of count
*/

int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
	putchar('-');
	n = -n;
	count++;
	}
	if (n / 10)
	{
	count += print_integer(args);
	}
	putchar((n % 10) + '0');
	count++;
	return (count);
}
