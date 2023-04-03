DESCRIPTION:

This is a customized printf function that allows you to outplay texts, numbers, charachters and certain format specifiers.
This whole project is built based on a data strucuture and multiple functions to perform specific tasks.



USAGE:

This printf function will not allow you to print all the specified function.
Here are exemples of some format specifiers you can perform using this customized printf:
1. %c:
	%c is a format specifier that outplays a charachter to the terminal.
2. %s:
	%s is a format specifier that outplays a string to the terminal.
3. %d:
	%d is a format specifier that outplays a decimal number.
4. %i:
	%i is a format specifier that outplays an integer.




EXEMPLES:

in order to print out a string using this printf you can use this code syntax down below.
let's say you're going to creat an array of charachters this way:

char name[] = "ilyes"
	_printf("Hello! my name is %s\n")

this code will outplay this line:
Hello! my name is ilyes




ALL OF THE FUNCTIONS USED ON THIS PROJECT:

_printf.c: This is a function that loops through the characters of the format string and prints them to the standard output depending on the charachter after the '%' sign.

format_specifier.c: This function defines several functions that are used by the _printf function to handle different format specifiers.

get_format_specifier.c: This function uses a format_specifier structure to associate a format character with a function that handles it.

print_integer.c: This function takes a variable number of arguments and prints an integer.

main.h: This is a header file that contains a char representing a format specifier character and a function pointer to the corresponding print function for the specifier.



AUTHOR:

ILYES MAZOUZ   
