#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int (*_typefor(const char *argu, int argb))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
