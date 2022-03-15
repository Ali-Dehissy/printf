#ifndef main_H_
#define main_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
/**
 * struct operation - a structure
 *@letter : pointer
 *@func : function pointer
 *Description : struct operation
 */
typedef struct operation
{
char *letter;
int (*func)(va_list);
} op;

int _printf(const char *format, ...);
int(*get_convert(const char *format, int i))(va_list list);
int print_i(va_list num);
void divnum(unsigned int num);
int print_c(va_list c);
int print_s(va_list s);
int _putchar(char c);
#endif
