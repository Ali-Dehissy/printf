#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_c - prints a character
 *@c: list of variable number of arguments
 *Return: ineteger
 */
int print_c(va_list c)
{
	char _char = va_arg(c, int);

	_putchar(_char);
	return (1);
}
/**
 *print_s - prints a string
 *@s: list of variable number of arguments
 *Return: integer
 */
int print_s(va_list s)
{
	char *_string;
	int i;

	_string = va_arg(s, char*);

	if (_string == NULL)
		_string = "(null)";
	for (i = 0 ; _string[i] != '\0' ; i++)
	{
		_putchar(_string[i]);
	}
	return (i);
}
