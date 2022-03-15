#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * *get_convert - convert specifiers
 *@format: pointer
 *@i: integer
 * Return: NULL
 */
int(*get_convert(const char *format, int i))(va_list list)
{
	int e;

	op convert[] = {
			{"c", print_c},
			{"s", print_s},
			{"d", print_i},
			{"i", print_i},
			{NULL, NULL}};

	for (e = 0 ; convert[e].letter != NULL ; e++)
	{
		if (format[i] == convert[e].letter[0])
			return (convert[e].func);
	}
	return (NULL);
}
