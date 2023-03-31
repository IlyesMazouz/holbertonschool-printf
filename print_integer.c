#include "main.h"

/**
*print_int - a function that outputs an integer
*@args: variable number of arguments
*Return: value of count
*/

int print_int(va_list args)
{
	int count = 0;
	int n = va_arg(args, int);
	int digit, sign = 1;

	if (n < 0)
	{
	sign = -1;
	n = -n;
	}

	digit = n % 10;
	n = n / 10;

	if (n != 0)
	{
	count += print_int_helper(n);
	}

	if (sign == -1)
	{
	putchar('-');
	count++;
	}

	putchar(digit + '0');
	count++;

	return (count);
}

/**
*print_int_helper - a helper function for print_integer
*@n: an integer
*Return: the number of digits in the integer
*/
int print_int_helper(int n)
{
	int count = 0;

	if (n / 10 != 0)
	{
	count += print_int_helper(n / 10);
	}

	putchar((n % 10) + '0');
	count++;

	return (count);
}
