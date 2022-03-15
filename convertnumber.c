#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_i - print integer
 *@num : agrs list
 *Return: integer
 */
int print_i(va_list num)
{
	unsigned int k;
	int x = va_arg(num, int);

	if (x < 0)
	{
		_putchar('-');
		k =  -x;
		divnum(k);
	}
	else
	{
		k = x;
		divnum(k);
	}
	return (k);
}
/**
 *divnum - to use putchar
 *@num: int to print
 */
void divnum(unsigned int num)
{
		if (num / 10)
			divnum(num / 10);

		_putchar('0' + num % 10);
}
