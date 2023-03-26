#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
  * _printf - printf function
  * @format: tring format
  * Return: length of string
  */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0, sum = 0;

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]), sum++, i++;
			continue;
		}
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			sum += printer(format[i], ptr);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			va_end(ptr);
			return (-1);
		}
	}
	va_end(ptr);
	return (sum);
}
