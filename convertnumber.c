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
	int q = 1;
	int j = 0;
	unsigned int k;
	int x = va_arg(num, int);

	if (x < 0)
	{
		_putchar('-');
		j++;
		k =  -x;
	
	}
	else
	{
		k = x;
	}
	while (k / q > 9)
	{
	q *= 10;
	}
	while (q != 0)
	{
	_putchar(k / q + '0');
	k %= q;
	q /= 10;
	j++;
	}

return (j);
}

