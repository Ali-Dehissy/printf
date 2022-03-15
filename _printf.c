#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - prints anything
 * @format: pointer to string that contains specifiers
 * Return: number of characters printed
 **/
int _printf(const char *format, ...)
{
	int i, j = 0;
	va_list list;

	va_start(list, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar(format[i]);
				j++;
			}
			else if (get_convert(format, i) != NULL)
				j += get_convert(format, i)(list);
			else
			{
				i--;
				_putchar(format[i]);
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
	}
	va_end(list);
	return (j);
}
