#ifndef PRINT_H
#define PRINT_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_str(char *);
int printer(char c, va_list ptr);
#endif
